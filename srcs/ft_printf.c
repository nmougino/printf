/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:09:25 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/12 19:03:04 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	initprint(t_print *print, t_spec *spec)
{
	print->convftab[0] = &conv_s;
	print->convftab[1] = &conv_ls;
	print->convftab[2] = &conv_p;
	print->convftab[3] = &conv_d;
	print->convftab[4] = &conv_ld;
	print->convftab[5] = &conv_i;
	print->convftab[6] = &conv_o;
	print->convftab[7] = &conv_lo;
	print->convftab[8] = &conv_u;
	print->convftab[9] = &conv_lu;
	print->convftab[10] = &conv_x;
	print->convftab[11] = &conv_bx;
	print->convftab[12] = &conv_c;
	print->convftab[13] = &conv_lc;
	print->pos = 0;
	print->ans = 0;
	print->spec = spec;
}

int			ft_printf(const char *format, ...)
{
	int				i;
	int				tmp;
	t_print			print;
	t_spec			spec;

	i = 0;
	va_start(print.ap, format);
	initprint(&print, &spec);
	while (format[i])
	{
		if (format[i] != '%')
			addto(format[i], &print);
		else if ((tmp = conv(&spec, &print, format + i + 1)) == -1)
			return (-1);
		else
			i += tmp;
		i++;
	}
	write(1, print.buf, print.pos);
	va_end(print.ap);
	return (print.ans);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:09:25 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/09 22:20:39 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	initprint(t_print *print, t_spec *spec)
{
	print->convftab[0] = &conv_s;
	print->convftab[1] = &conv_S;
	print->convftab[2] = &conv_p;
	print->convftab[3] = &conv_d;
	print->convftab[4] = &conv_D;
	print->convftab[5] = &conv_i;
	print->convftab[6] = &conv_o;
	print->convftab[7] = &conv_O;
	print->convftab[8] = &conv_u;
	print->convftab[9] = &conv_U;
	print->convftab[10] = &conv_x;
	print->convftab[11] = &conv_X;
	print->convftab[12] = &conv_c;
	print->convftab[13] = &conv_C;
	print->pos = 0;
	print->ans = 0;
	print->spec = spec;
}

static int	setspec(t_spec *spec, const char *str)
{
	int		i;
	int		tmp;

	tmp = 0;
	i = 0;
	i += setflag(spec, str);
	i += setmfwi(spec, str + i);
	i += setprec(spec, str + i);
	i += setmodi(spec, str + i);
	if ((tmp = setconv(spec, str + i) == -1))
		return (-1);
	i += tmp;
	return (i);
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
		else
		{
			if ((tmp = setspec(&spec, format + i + 1) + 1) == 0)
				return (-1);
			i += tmp;
			conv(&spec, &print);
		}
		++i;
	}
	write(1, print.buf, print.pos);
	va_end(print.ap);
	return (print.ans);
}

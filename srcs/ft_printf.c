/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:09:25 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/02 20:38:59 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	addto(char c, t_print *print)
{
	if (++(print->pos) >= BUF_SIZE)
	{
		write(1, print->buf, BUF_SIZE);
		(print->pos) = 0;
	}
	print->buf[print->pos] = c;
	++(print->pos);
}

static void	initprint(t_print *print)
{
	//print->convftab[0] = &conv_s;
	//print->convftab[1] = &conv_S;
	//print->convftab[2] = &conv_p;
	//print->convftab[3] = &conv_d;
	//print->convftab[4] = &conv_D;
	//print->convftab[5] = &conv_i;
	//print->convftab[6] = &conv_o;
	//print->convftab[7] = &conv_O;
	//print->convftab[8] = &conv_u;
	//print->convftab[9] = &conv_U;
	//print->convftab[10] = &conv_x;
	//print->convftab[11] = &conv_X;
	//print->convftab[12] = &conv_c;
	print->convftab[13] = &conv_C;
	print->pos = 0;
}

static int	setspec(t_spec *spec, const char *str)
{
	int		i;

	i = 0;
	i += setflag(spec, str);
	i += setmfwi(spec, str + i);
	i += setprec(spec, str + i);
	i += setmodi(spec, str + i);
	i += setconv(spec, str + i);
	return (i);
}

int			ft_printf(const char *format, ...)
{
	int				i;
	int				ans;
	t_print			print;
	t_spec			spec;

	// pour gagner 2 lignes, passer ans dans print;
	i = 0;
	ans = 0;
	va_start(print.ap, format);
	initprint(&print);
	while (format[i])
	{
		if (format[i] != '%')
		{
			addto(format[i], &print);
			++ans;
		}
		else
		{
			i += setspec(&spec, format + i + 1) + 1;
			ans += conv(&spec, &print);
		}
		++i;
	}
	write(1, print.buf, print.pos);
	va_end(print.ap);
	return (ans);
}

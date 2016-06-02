/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:09:25 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/02 17:50:12 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// VERSION EMPIRIQUE

#include "ft_printf.h"

static void	addto(char c, char buf[], unsigned int *pos)
{
	if (++(*pos) >= BUF_SIZE)
	{
		write(1, buf, BUF_SIZE);
		*pos = 0;
	}
	buf[*pos] = c;
	++(*pos);
}

static void	initprint(t_print *print, const char *format)
{
	va_start(print->ap, format);
	print->pos = 0;
}


static int	setspec(t_spec* spec, const char *str)
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

while (ft_strchr("#0-+ hljz sSpdDioOuUxXcC", str[i]))





int		ft_printf(const char *format, ...)
{
	int				i;
	int				ans;
	t_print			print;
	t_spec			spec;

	i = 0;
	ans = 0;
	initprint(&print, format);
	while(format[i])
	{
		if (format[i] != '%')
		{
			addto(format[i], buf, &pos);
			++ans;
		}
		else
		{
			++i;
			i += setspec(&spec, format + i);
			ans += conv(spec, &print);
		}
		++i;
	}
	write(1, buf, pos);
	va_end(print.ap);
	return (ans);
}

int	main(void)
{
	ft_putnbrendl(ft_printf("bonjour"));
	return (0);
}

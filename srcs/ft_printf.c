/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:09:25 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/01 22:43:35 by nmougino         ###   ########.fr       */
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



static int	setflag(t_spec *spec, const char *str)
{
	int i;

	i = 0;
	while (ft_strchr("#0-+", str[i]))
	{
		if (str[i] == '#')
			spec->flags |= (1 << 4);
		if (str[i] == '0' && (!(spec->flags & (1 << 2))))
			spec->flags |= (1 << 3);
		if (str[i] == '-')
		{
			spec->flags |= (1 << 2);
			spec->flags &= !(1 << 3);
		}
		if (str[i] == ' ' && (!(spec->flags & 1)))
			spec->flags |= (1 << 1);
		if (str[i] == '+')
		{
			spec->flags |= 1;
			spec->flags &= !(1 << 1);
		}
		i++;
	}
	return (i);
}

static int	setmfwi(t_spec *spec, const char *str)
{
	int		i;

	i = 0;
	while (ft_strchr("", str[i])
	{

		i++;
	}
	return (i);
}

static int	setprec(t_spec *spec, const char *str)
{
	int		i;

	i = 0;
	while (ft_strchr("", str[i])
	{

		i++;
	}
	return (i);
}

static int	setmodi(t_spec *spec, const char *str)
{
	int		i;

	i = 0;
	while (ft_strchr("", str[i])
	{

		i++;
	}
	return (i);
}

static int	setconv(t_spec *spec, const char *str)
{
	int		i;

	i = 0;
	while (ft_strchr("", str[i])
	{

		i++;
	}
	return (i);
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

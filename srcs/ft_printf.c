/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:09:25 by nmougino          #+#    #+#             */
/*   Updated: 2016/05/31 19:02:33 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	conv(const char *format, va_list *ap)
{
	ft_putstr(" ->CONVERSION:");
	ft_putchar(*format);
	ft_putchar(' ');
	ap = NULL;
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[++i] == '%')
				ft_putchar('%');
			else
				conv(format + i, &ap);
		}
		else
			ft_putchar(*format);
		format++;
	}
	ft_putchar('\n');
	va_end(ap);
	return (0);
}

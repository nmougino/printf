/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 19:00:03 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/12 22:15:02 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	setspec(t_spec *spec, const char *str)
{
	int		i;
	int		ans;

	ans = 0;
	ans += setflag(spec, str);
	ans += setmfwi(spec, str + ans);
	ans += setprec(spec, str + ans);
	ans += setmodi(spec, str + ans);
	if ((i = setconv(spec, str + ans)) == -1)
		return (-1);
	ans += i;
	return (ans);
}

int			conv(t_spec *spec, t_print *print, const char *format)
{
	int	(*convf)(t_spec*, t_print*);
	int	tmp;

	if (format[0] == '%')
	{
		addto('%', print);
		return (1);
	}
	if ((tmp = setspec(spec, format)) == -1)
		return (-1);
	convf = print->convftab[ft_strnloc(spec->conv, "sSpdDioOuUxXcCb", 15)];
	convf(spec, print);
	return (tmp);
}
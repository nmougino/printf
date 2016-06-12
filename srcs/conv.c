/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 19:00:03 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/12 17:45:44 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
void	conv(t_spec *spec, t_print *print)
{
	int	(*convf)(t_spec*, t_print*);

	convf = print->convftab[ft_strnloc(spec->conv, "sSpdDioOuUxXcC", 14)];
	convf(spec, print);
}
*/
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

int		conv(t_spec *spec, t_print *print, const char *format)
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
	convf = print->convftab[ft_strnloc(spec->conv, "sSpdDioOuUxXcC", 14)];
	convf(spec, print);
	return (tmp);
}

void	conv_s(t_spec *spec, t_print *print)
{
	int		i;
	int		neg;
	char	*s;

	if (spec->hljz == E_L || spec->hljz == E_LL)
	{
		spec->conv = 'S';
		conv_S(spec, print);
	}
	i = 0;
	s = (char *)urecupparam(E_LONG, print->ap);
	neg = (spec->prec > -1 ? ft_min(spec->prec, ft_strlen(s)) : ft_strlen(s));
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - neg) : 0;
	while (s[i] && (spec->prec--))
		addto(s[i++], print);
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_p(t_spec *spec, t_print *print)
{
	spec->flags |= E_SHARP;
	spec->hljz = E_L;
	spec->prec = -1;
	spec->conv = 'x';
	conv_x(spec, print);

}

void	conv_c(t_spec *spec, t_print *print)
{
	intmax_t	p;

	if (spec->hljz == E_L || spec->hljz == E_LL)
	{
		spec->conv = 'C';
		conv_C(spec, print);
	}
	else
	{
	 	p = recupparam(spec->hljz, print->ap);
		(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - 1) : 0;
		addto(p, print);
		(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
	}
}

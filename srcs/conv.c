/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 19:00:03 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/12 15:40:58 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv(t_spec *spec, t_print *print)
{
	int	(*convf)(t_spec*, t_print*);

	convf = print->convftab[ft_strnloc(spec->conv, "sSpdDioOuUxXcC", 14)];
	convf(spec, print);
}

void	conv_s(t_spec *spec, t_print *print)
{
	int		i;
	int		neg;
	char	*s;

	i = 0;
	s = (char *)urecupparam(E_LONG, print->ap);
	neg = (spec->prec > -1 ? ft_min(spec->prec, ft_strlen(s)) : ft_strlen(s));
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - neg) : 0;
	while (s[i] && (spec->prec--))
		addto(s[i++], print);
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_S(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
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

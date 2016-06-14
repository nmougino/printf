/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 19:07:00 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/12 19:18:28 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_x(t_spec *spec, t_print *print)
{
	int			i;
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	i = ((spec->flags & E_SHARP && !(spec->flags & E_ZERO)) ? 2 : 0);
	(spec->flags & E_ZERO) ? applysharp(print, spec) : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(i + ft_max(spec->prec, ft_nbrlenbase(p, 16)))) : 0;
	(!(spec->flags & E_ZERO)) ? applysharp(print, spec) : 0;
	applynumprec(print, spec, ft_nbrlenbase(p, 16));
	uitoabase(p, "0123456789abcdef", print, ft_nbrlenbase(p, 16));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_bx(t_spec *spec, t_print *print)
{
	int			i;
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	i = ((spec->flags & E_SHARP && !(spec->flags & E_ZERO)) ? 2 : 0);
	(spec->flags & E_ZERO) ? applysharp(print, spec) : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(i + ft_max(spec->prec, ft_nbrlenbase(p, 16)))) : 0;
	(!(spec->flags & E_ZERO)) ? applysharp(print, spec) : 0;
	applynumprec(print, spec, ft_nbrlenbase(p, 16));
	uitoabase(p, "0123456789ABCDEF", print, ft_nbrlenbase(p, 16));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

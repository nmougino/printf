/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 19:07:26 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/21 16:23:09 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		conv_d(t_spec *spec, t_print *print)
{
	int			i;
	int			j;
	intmax_t	p;

	p = recupparam(spec->hljz, print->ap);
	i = (p < 0) || (spec->flags & 3);
	j = !(spec->prec || p) ? 0
		: (ft_max(spec->prec + i, ft_nbrlen(ft_abs(p)) + i));
	++spec->mfw;
	(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : --spec->mfw;
	(spec->flags & E_ZERO && p > 0) ? --spec->prec : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - j) : 0;
	!(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : 0;
	applynumprec(print, spec, ft_nbrlen(ft_abs(p)));
	(!spec->prec && !p) ? 0 : sitoa(p, print, ft_nbrlen(ft_abs(p)));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw +
		((p > 0) && ((!spec->flags & 1) && p < 0))) : 0;
}

void		conv_i(t_spec *spec, t_print *print)
{
	int			i;
	int			j;
	intmax_t	p;

	p = recupparam(spec->hljz, print->ap);
	i = (p < 0) || (spec->flags & 3);
	j = !(spec->prec || p) ? 0
		: (ft_max(spec->prec + i, ft_nbrlen(ft_abs(p)) + i));
	++spec->mfw;
	(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : --spec->mfw;
	(spec->flags & E_ZERO && p > 0) ? --spec->prec : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - j) : 0;
	!(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : 0;
	applynumprec(print, spec, ft_nbrlen(ft_abs(p)));
	(!spec->prec && !p) ? 0 : sitoa(p, print, ft_nbrlen(ft_abs(p)));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw +
		((p > 0) && ((!spec->flags & 1) && p < 0))) : 0;
}

void	conv_ld(t_spec *spec, t_print *print)
{
	spec->hljz = ((spec->flags == E_L) ? E_LL : E_L);
	spec->conv = 'd';
	conv_d(spec, print);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 19:06:00 by nmougino          #+#    #+#             */
/*   Updated: 2016/08/02 12:40:13 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_p(t_spec *spec, t_print *print)
{
	spec->hljz = E_L;
	int			j;
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	j = !(spec->prec || p) ? 0
		: (ft_max(spec->prec, ft_nbrlenbase(p, 16) + 2));
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - j) : 0;
	addto('0', print);
	addto('x', print);
	applynumprec(print, spec, ft_nbrlenbase(p, 16));
	!(spec->prec || p) ? 0
		: uitoabase(p, "0123456789abcdef", print, ft_nbrlenbase(p, 16));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

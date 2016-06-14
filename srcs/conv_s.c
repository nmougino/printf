/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 19:05:54 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/12 19:05:56 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_s(t_spec *spec, t_print *print)
{
	int		i;
	int		neg;
	char	*s;

	if (spec->hljz == E_L || spec->hljz == E_LL)
	{
		spec->conv = 'S';
		conv_ls(spec, print);
	}
	i = 0;
	s = (char *)urecupparam(E_LONG, print->ap);
	neg = (spec->prec > -1 ? ft_min(spec->prec, ft_strlen(s)) : ft_strlen(s));
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - neg) : 0;
	while (s[i] && (spec->prec--))
		addto(s[i++], print);
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

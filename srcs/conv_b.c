/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 21:16:43 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/13 18:07:01 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	applyprecbin(t_spec *spec, t_print *print, int len)
{
	int	i;
	int	c;

	c = 0;
	i = 4 * spec->prec - len;
	while (i-- > 0)
	{
		if (!(c % 4) && c)
			addto(' ', print);
		addto('0', print);
		++c;
	}
	if (c)
		addto(' ', print);
}

void	conv_b(t_spec *spec, t_print *print)
{
	uintmax_t	p;
	uintmax_t	tmp;
	int			len;
	int			i;
	int			tmplen;

	p = urecupparam(spec->hljz, print->ap);
	len = ft_bitlen(p);
	tmplen = (4 - (len % 4));
	i = (spec->flags & E_SHARP) ? 1 : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(len + tmplen + (i * ((len + tmplen) / 4)) - 1) ) : 0;
	i = tmplen;
	(spec->prec > 0) ? applyprecbin(spec, print, len + tmplen) : 0;
	while (tmplen--)
		addto('0', print);
	while(len--)
	{
		tmp = p;
		tmplen = len;
		while (tmplen--)
			tmp /= 2;
		(((spec->flags & E_SHARP) || spec->prec > -1) && !(i % 4) && i) ?
			addto(' ', print) : 0;
		addto(tmp % 2 + '0', print);
		++i;
	}
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;;
}

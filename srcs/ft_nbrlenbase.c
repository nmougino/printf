/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlenbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 17:06:58 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/22 17:02:41 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nbrlenbase(uintmax_t nb, int base)
{
	double	tmp;
	int		i;

	i = 1;
	tmp = (double)nb;
	while (tmp >= (uintmax_t)base)
	{
		++i;
		tmp /= base;
	}
	return (i);
}

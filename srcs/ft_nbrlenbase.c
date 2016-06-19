/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlenbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 17:06:58 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/19 20:13:18 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nbrlenbase(unsigned long nb, int base)
{
	double	tmp;
	int		i;

	i = 1;
	tmp = (double)nb;
	while (tmp > (unsigned long)base)
	{
		++i;
		tmp /= base;
	}
	return (i);
}

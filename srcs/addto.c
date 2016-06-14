/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 19:05:45 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/14 15:54:02 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	addto(char c, t_print *print)
{
	if (print->pos == BUF_SIZE)
	{
		write(1, print->buf, BUF_SIZE);
		(print->pos) = 0;
	}
	print->buf[print->pos] = c;
	++(print->pos);
	++(print->ans);
	--(print->spec->mfw);
}

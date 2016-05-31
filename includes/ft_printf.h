/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:06:49 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/01 00:27:34 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>


enum				e_modifiers
{
	E_NO;
	E_HH;
	E_H;
	E_L;
	E_LL;
	E_J;
	E_Z;
}

typedef struct		s_spec
{
	/*
	**	flags					8bits : '#' '0' '-' ' ' '+' 0 0 precision?
	**	minimum field width
	**	precision -> precision = 0 != !precision
	**	modifiers
	*/

	char			flags;
	unsigned int	mfw;
	unsigned int	precision;
	int				modifiers;
	char			conv;
}					t_spec

int			ft_printf(const char *format, ...);

#endif

/*
????	ft_cast(int signed, int modifier)
if (signed == 1)
{
	if (modifier == E_NO)
		lapin = va_arg(va_list, int);
	if (modifier == E_HH)
		lapin = (char)va_arg(va_list, int);
	if (modifier == E_H)
		lapin = (short)va_arg(va_list, int);
	if (modifier > E_L)
		lapin = va_arg(va_list, long);
	if (modifier > E_LL)
		lapin = va_arg(va_list, long long);
	if (modifier > E_Z)
		lapin = va_arg(va_list, size_t);
	if (modifier > E_J)
		lapin = va_arg(va_list, intmax_t);
}
else
{
	if (modifier == -2)
		lapin = (unsigned char)va_arg(va_list, unsigned int);
	if (modifier == -1)
		lapin = (unsigned short)va_arg(va_list, unsigned int);
	if (modifier == 0)
		lapin = va_arg(va_list, unsigned int);
	if (modifier > 0)
		lapin = va_arg(va_list, unsigned long);
}
*/

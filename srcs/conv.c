/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 19:00:03 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/09 20:12:00 by nmougino         ###   ########.fr       */
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
	char	*s;

	i = 0;
	s = (char *)urecupparam(E_LONG, print->ap);
	spec = NULL;
	while (s[i])
		addto(s[i++], print);
}

void	conv_S(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
}

void	conv_p(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
}

void	conv_c(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
}

void	conv_C(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
}

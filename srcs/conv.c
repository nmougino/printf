/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 19:00:03 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/02 20:47:01 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conv(t_spec *spec, t_print *print)
{
	int	(*convf)(t_spec*, t_print*);

	convf = print->convftab[ft_strnloc(spec->conv, "sSpdDioOuUxXcC", 14)];
	return (convf(spec, print););
}

int	conv_s(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_S(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_p(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_d(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_D(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_i(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_o(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_O(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_u(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_U(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_x(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_X(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_c(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

int	conv_C(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:04:34 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/10 17:11:35 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	//ft_putnbrendl(ft_printf(",bonjour %d,\n", 123));
	//ft_putnbrendl(ft_printf(",bonjour %d,\n", -123));
	//ft_putnbrendl(ft_printf(",bonjour %+d,\n", 123));
	//ft_putnbrendl(ft_printf(",bonjour % d,\n", 123));
	//ft_putnbrendl(ft_printf(",bonjour %#d,\n", 123));
	ft_putendl("+PRECISION\n");

	ft_printf("|%.5d|\n", 123);
	printf("|%.5d|\n\n", 123);
	ft_printf("|%.5d|\n", -123);
	printf("|%.5d|\n\n", -123);

	ft_printf("|%#.5d|\n", 123);
	printf("|%#.5d|\n\n", 123);
	ft_printf("|%#.5d|\n", -123);
	printf("|%#.5d|\n\n", -123);

	ft_printf("|%0.5d|\n", 123);
	printf("|%0.5d|\n\n", 123);
	ft_printf("|%0.5d|\n", -123);
	printf("|%0.5d|\n\n", -123);

	ft_printf("|%-.5d|\n", 123);
	printf("|%-.5d|\n\n", 123);
	ft_printf("|%-.5d|\n", -123);
	printf("|%-.5d|\n\n", -123);

	ft_printf("|% .5d|\n", 123);
	printf("|% .5d|\n\n", 123);
	ft_printf("|% .5d|\n", -123);
	printf("|% .5d|\n\n", -123);

	ft_printf("|%+.5d|\n", 123);
	printf("|%+.5d|\n\n", 123);
	ft_printf("|%+.5d|\n", -123);
	printf("|%+.5d|\n\n", -123);

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5d|\n", 123);
	printf("|%10.5d|\n", 123);
	ft_printf("|%10.5d|\n", -123);
	printf("|%10.5d|\n\n", -123);

	ft_printf("|%#10.5d|\n", 123);
	printf("|%#10.5d|\n", 123);
	ft_printf("|%#10.5d|\n", -123);
	printf("|%#10.5d|\n\n", -123);

	ft_printf("|%010.5d|\n", 123);
	printf("|%010.5d|\n", 123);
	ft_printf("|%010.5d|\n", -123);
	printf("|%010.5d|\n\n", -123);

	ft_printf("|%-10.5d|\n", 123);
	printf("|%-10.5d|\n", 123);
	ft_printf("|%-10.5d|\n", -123);
	printf("|%-10.5d|\n\n", -123);

	ft_printf("|% 10.5d|\n", 123);
	printf("|% 10.5d|\n", 123);
	ft_printf("|% 10.5d|\n", -123);
	printf("|% 10.5d|\n\n", -123);

	ft_printf("|%+10.5d|\n", 123);
	printf("|%+10.5d|\n", 123);
	ft_printf("|%+10.5d|\n", -123);
	printf("|%+10.5d|\n\n", -123);

	ft_putendl("-PRECISION\n");

	ft_printf("|%10d|\n", 123);
	printf("|%10d|\n", 123);
	ft_printf("|%10d|\n", -123);
	printf("|%10d|\n\n", -123);

	ft_printf("|%#10d|\n", 123);
	printf("|%#10d|\n", 123);
	ft_printf("|%#10d|\n", -123);
	printf("|%#10d|\n\n", -123);

	ft_printf("|%0+10d|\n", 123);
	printf("|%0+10d|\n", 123);
	ft_printf("|%010d|\n", -123);
	printf("|%010d|\n\n", -123);

	ft_printf("|%-10d|\n", 123);
	printf("|%-10d|\n", 123);
	ft_printf("|%-10d|\n", -123);
	printf("|%-10d|\n\n", -123);

	ft_printf("|% 10d|\n", 123);
	printf("|% 10d|\n", 123);
	ft_printf("|% 10d|\n", -123);
	printf("|% 10d|\n\n", -123);

	ft_printf("|%+10d|\n", 123);
	printf("|%+10d|\n", 123);
	ft_printf("|%+10d|\n", -123);
	printf("|%+10d|\n\n", -123);

	//printf("lapin,% .5d,", 123);
	//printf("lapin,%+.5d,", 123);
	return (0);
}

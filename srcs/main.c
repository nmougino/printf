/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:04:34 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/11 16:41:25 by nmougino         ###   ########.fr       */
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

	ft_putendl("		heXa\n");

	ft_putendl("+PRECISION\n");

	ft_printf("|%.5X|\n", 123);
	printf("|%.5X|\n\n", 123);
	ft_printf("|%.5X|\n", -123);
	printf("|%.5X|\n\n", -123);

	ft_printf("|%#.5X|\n", 123);
	printf("|%#.5X|\n\n", 123);
	ft_printf("|%#.5X|\n", -123);
	printf("|%#.5X|\n\n", -123);

	ft_printf("|%0.5X|\n", 123);
	printf("|%0.5X|\n\n", 123);
	ft_printf("|%0.5X|\n", -123);
	printf("|%0.5X|\n\n", -123);

	ft_printf("|%-.5X|\n", 123);
	printf("|%-.5X|\n\n", 123);
	ft_printf("|%-.5X|\n", -123);
	printf("|%-.5X|\n\n", -123);

	ft_printf("|% .5X|\n", 123);
	printf("|% .5X|\n\n", 123);
	ft_printf("|% .5X|\n", -123);
	printf("|% .5X|\n\n", -123);

	ft_printf("|%+.5X|\n", 123);
	printf("|%+.5X|\n\n", 123);
	ft_printf("|%+.5X|\n", -123);
	printf("|%+.5X|\n\n", -123);

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5X|\n", 123);
	printf("|%10.5X|\n", 123);
	ft_printf("|%10.5X|\n", -123);
	printf("|%10.5X|\n\n", -123);

	ft_printf("|%#10.5X|\n", 123);
	printf("|%#10.5X|\n", 123);
	ft_printf("|%#10.5X|\n", -123);
	printf("|%#10.5X|\n\n", -123);

	ft_printf("|%010.5X|\n", 123);
	printf("|%010.5X|\n", 123);
	ft_printf("|%010.5X|\n", -123);
	printf("|%010.5X|\n\n", -123);

	ft_printf("|%-10.5X|\n", 123);
	printf("|%-10.5X|\n", 123);
	ft_printf("|%-10.5X|\n", -123);
	printf("|%-10.5X|\n\n", -123);

	ft_printf("|% 10.5X|\n", 123);
	printf("|% 10.5X|\n", 123);
	ft_printf("|% 10.5X|\n", -123);
	printf("|% 10.5X|\n\n", -123);

	ft_printf("|%+10.5X|\n", 123);
	printf("|%+10.5X|\n", 123);
	ft_printf("|%+10.5X|\n", -123);
	printf("|%+10.5X|\n\n", -123);

	ft_putendl("-PRECISION\n");

	ft_printf("|%10X|\n", 123);
	printf("|%10X|\n", 123);
	ft_printf("|%10X|\n", -123);
	printf("|%10X|\n\n", -123);

	ft_printf("|%#10X|\n", 123);
	printf("|%#10X|\n", 123);
	ft_printf("|%#10X|\n", -123);
	printf("|%#10X|\n\n", -123);

	ft_printf("|%0#10X|\n", 123);
	printf("|%0#10X|\n", 123);
	ft_printf("|%0#10X|\n", -123);
	printf("|%0#10X|\n\n", -123);

	ft_printf("|%-10X|\n", 123);
	printf("|%-10X|\n", 123);
	ft_printf("|%-10X|\n", -123);
	printf("|%-10X|\n\n", -123);

	ft_printf("|% 10X|\n", 123);
	printf("|% 10X|\n", 123);
	ft_printf("|% 10X|\n", -123);
	printf("|% 10X|\n\n", -123);

	ft_printf("|%-#10X|\n", 123);
	printf("|%-#10X|\n", 123);
	ft_printf("|%+10X|\n", -123);
	printf("|%+10X|\n\n", -123);

	ft_putendl("		octal\n");

	ft_putendl("+PRECISION\n");

	ft_printf("|%.5o|\n", 123);
	printf("|%.5o|\n\n", 123);
	ft_printf("|%.5o|\n", -123);
	printf("|%.5o|\n\n", -123);

	ft_printf("|%#.5o|\n", 123);
	printf("|%#.5o|\n\n", 123);
	ft_printf("|%#.5o|\n", -123);
	printf("|%#.5o|\n\n", -123);

	ft_printf("|%0.5o|\n", 123);
	printf("|%0.5o|\n\n", 123);
	ft_printf("|%0.5o|\n", -123);
	printf("|%0.5o|\n\n", -123);

	ft_printf("|%-.5o|\n", 123);
	printf("|%-.5o|\n\n", 123);
	ft_printf("|%-.5o|\n", -123);
	printf("|%-.5o|\n\n", -123);

	ft_printf("|% .5o|\n", 123);
	printf("|% .5o|\n\n", 123);
	ft_printf("|% .5o|\n", -123);
	printf("|% .5o|\n\n", -123);

	ft_printf("|%+.5o|\n", 123);
	printf("|%+.5o|\n\n", 123);
	ft_printf("|%+.5o|\n", -123);
	printf("|%+.5o|\n\n", -123);

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5o|\n", 123);
	printf("|%10.5o|\n", 123);
	ft_printf("|%10.5o|\n", -123);
	printf("|%10.5o|\n\n", -123);

	ft_printf("|%#10.5o|\n", 123);
	printf("|%#10.5o|\n", 123);
	ft_printf("|%#10.5o|\n", -123);
	printf("|%#10.5o|\n\n", -123);

	ft_printf("|%010.5o|\n", 123);
	printf("|%010.5o|\n", 123);
	ft_printf("|%010.5o|\n", -123);
	printf("|%010.5o|\n\n", -123);

	ft_printf("|%-10.5o|\n", 123);
	printf("|%-10.5o|\n", 123);
	ft_printf("|%-10.5o|\n", -123);
	printf("|%-10.5o|\n\n", -123);

	ft_printf("|% 10.5o|\n", 123);
	printf("|% 10.5o|\n", 123);
	ft_printf("|% 10.5o|\n", -123);
	printf("|% 10.5o|\n\n", -123);

	ft_printf("|%+10.5o|\n", 123);
	printf("|%+10.5o|\n", 123);
	ft_printf("|%+10.5o|\n", -123);
	printf("|%+10.5o|\n\n", -123);

	ft_putendl("-PRECISION\n");

	ft_printf("|%10o|\n", 123);
	printf("|%10o|\n", 123);
	ft_printf("|%10o|\n", -123);
	printf("|%10o|\n\n", -123);

	ft_printf("|%#10o|\n", 123);
	printf("|%#10o|\n", 123);
	ft_printf("|%#10o|\n", -123);
	printf("|%#10o|\n\n", -123);

	ft_printf("|%0#10o|\n", 123);
	printf("|%0#10o|\n", 123);
	ft_printf("|%0#10o|\n", -123);
	printf("|%0#10o|\n\n", -123);

	ft_printf("|%-10o|\n", 123);
	printf("|%-10o|\n", 123);
	ft_printf("|%-10o|\n", -123);
	printf("|%-10o|\n\n", -123);

	ft_printf("|% 10o|\n", 123);
	printf("|% 10o|\n", 123);
	ft_printf("|% 10o|\n", -123);
	printf("|% 10o|\n\n", -123);

	ft_printf("|%-#10o|\n", 123);
	printf("|%-#10o|\n", 123);
	ft_printf("|%+10o|\n", -123);
	printf("|%+10o|\n\n", -123);


	ft_printf("|%010o|\n", 123);
	printf("|%010o|\n\n", 123);
	ft_printf("|%010o|\n", -123);
	printf("|%010o|\n\n", -123);
	ft_printf("|%010X|\n", 123);
	printf("|%010X|\n\n", 123);
	ft_printf("|%010X|\n", -123);
	printf("|%010X|\n\n", -123);


	//printf("lapin,% .5d,", 123);
	//printf("lapin,%+.5d,", 123);
	return (0);
}

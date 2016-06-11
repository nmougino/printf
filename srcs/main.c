/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:04:34 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/11 19:07:36 by nmougino         ###   ########.fr       */
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
	/*ft_putendl("+PRECISION\n");

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

	ft_putendl("		unsigned\n");

	ft_putendl("+PRECISION\n");

	ft_printf("|%.5u|\n", 123);
	printf("|%.5u|\n\n", 123);
	ft_printf("|%.5u|\n", -123);
	printf("|%.5u|\n\n", -123);

	ft_printf("|%#.5u|\n", 123);
	printf("|%#.5u|\n\n", 123);
	ft_printf("|%#.5u|\n", -123);
	printf("|%#.5u|\n\n", -123);

	ft_printf("|%0.5u|\n", 123);
	printf("|%0.5u|\n\n", 123);
	ft_printf("|%0.5u|\n", -123);
	printf("|%0.5u|\n\n", -123);

	ft_printf("|%-.5u|\n", 123);
	printf("|%-.5u|\n\n", 123);
	ft_printf("|%-.5u|\n", -123);
	printf("|%-.5u|\n\n", -123);

	ft_printf("|% .5u|\n", 123);
	printf("|% .5u|\n\n", 123);
	ft_printf("|% .5u|\n", -123);
	printf("|% .5u|\n\n", -123);

	ft_printf("|%+.5u|\n", 123);
	printf("|%+.5u|\n\n", 123);
	ft_printf("|%+.5u|\n", -123);
	printf("|%+.5u|\n\n", -123);

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5u|\n", 123);
	printf("|%10.5u|\n", 123);
	ft_printf("|%10.5u|\n", -123);
	printf("|%10.5u|\n\n", -123);

	ft_printf("|%#10.5u|\n", 123);
	printf("|%#10.5u|\n", 123);
	ft_printf("|%#10.5u|\n", -123);
	printf("|%#10.5u|\n\n", -123);

	ft_printf("|%010.5u|\n", 123);
	printf("|%010.5u|\n", 123);
	ft_printf("|%010.5u|\n", -123);
	printf("|%010.5u|\n\n", -123);

	ft_printf("|%-10.5u|\n", 123);
	printf("|%-10.5u|\n", 123);
	ft_printf("|%-10.5u|\n", -123);
	printf("|%-10.5u|\n\n", -123);

	ft_printf("|% 10.5u|\n", 123);
	printf("|% 10.5u|\n", 123);
	ft_printf("|% 10.5u|\n", -123);
	printf("|% 10.5u|\n\n", -123);

	ft_printf("|%+10.5u|\n", 123);
	printf("|%+10.5u|\n", 123);
	ft_printf("|%+10.5u|\n", -123);
	printf("|%+10.5u|\n\n", -123);

	ft_putendl("-PRECISIuN\n");

	ft_printf("|%10u|\n", 123);
	printf("|%10u|\n", 123);
	ft_printf("|%10u|\n", -123);
	printf("|%10u|\n\n", -123);

	ft_printf("|%#10u|\n", 123);
	printf("|%#10u|\n", 123);
	ft_printf("|%#10u|\n", -123);
	printf("|%#10u|\n\n", -123);

	ft_printf("|%0#10u|\n", 123);
	printf("|%0#10u|\n", 123);
	ft_printf("|%0#10u|\n", -123);
	printf("|%0#10u|\n\n", -123);

	ft_printf("|%-10u|\n", 123);
	printf("|%-10u|\n", 123);
	ft_printf("|%-10u|\n", -123);
	printf("|%-10u|\n\n", -123);

	ft_printf("|% 10u|\n", 123);
	printf("|% 10u|\n", 123);
	ft_printf("|% 10u|\n", -123);
	printf("|% 10u|\n\n", -123);

	ft_printf("|%-#10u|\n", 123);
	printf("|%-#10u|\n", 123);
	ft_printf("|%+10u|\n", -123);
	printf("|%+10u|\n\n", -123);


*/
	ft_putendl("		s\n");

	ft_putendl("+PRECISION\n");

	ft_printf("|%.5s|\n","bonjour");
	printf("|%.5s|\n\n","bonjour");
	ft_printf("|%.5s|\n", "bonjour");
	printf("|%.5s|\n\n", "bonjour");

	ft_printf("|%#.5s|\n","bonjour");
	printf("|%#.5s|\n\n","bonjour");
	ft_printf("|%#.5s|\n", "bonjour");
	printf("|%#.5s|\n\n", "bonjour");

	ft_printf("|%0.5s|\n","bonjour");
	printf("|%0.5s|\n\n","bonjour");
	ft_printf("|%0.5s|\n", "bonjour");
	printf("|%0.5s|\n\n", "bonjour");

	ft_printf("|%-.5s|\n","bonjour");
	printf("|%-.5s|\n\n","bonjour");
	ft_printf("|%-.5s|\n", "bonjour");
	printf("|%-.5s|\n\n", "bonjour");

	ft_printf("|% .5s|\n","bonjour");
	printf("|% .5s|\n\n","bonjour");
	ft_printf("|% .5s|\n", "bonjour");
	printf("|% .5s|\n\n", "bonjour");

	ft_printf("|%+.5s|\n","bonjour");
	printf("|%+.5s|\n\n","bonjour");
	ft_printf("|%+.5s|\n", "bonjour");
	printf("|%+.5s|\n\n", "bonjour");

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5s|\n","bonjour");
	printf("|%10.5s|\n","bonjour");
	ft_printf("|%10.5s|\n", "bonjour");
	printf("|%10.5s|\n\n", "bonjour");

	ft_printf("|%#10.5s|\n","bonjour");
	printf("|%#10.5s|\n","bonjour");
	ft_printf("|%#10.5s|\n", "bonjour");
	printf("|%#10.5s|\n\n", "bonjour");

	ft_printf("|%010.5s|\n","bonjour");
	printf("|%010.5s|\n","bonjour");
	ft_printf("|%010.5s|\n", "bonjour");
	printf("|%010.5s|\n\n", "bonjour");

	ft_printf("|%-10.5s|\n","bonjour");
	printf("|%-10.5s|\n","bonjour");
	ft_printf("|%-10.5s|\n", "bonjour");
	printf("|%-10.5s|\n\n", "bonjour");

	ft_printf("|% 10.5s|\n","bonjour");
	printf("|% 10.5s|\n","bonjour");
	ft_printf("|% 10.5s|\n", "bonjour");
	printf("|% 10.5s|\n\n", "bonjour");

	ft_printf("|%+10.5s|\n","bonjour");
	printf("|%+10.5s|\n","bonjour");
	ft_printf("|%+10.5s|\n", "bonjour");
	printf("|%+10.5s|\n\n", "bonjour");

	ft_putendl("-PRECISIsN\n");

	ft_printf("|%10s|\n","bonjour");
	printf("|%10s|\n","bonjour");
	ft_printf("|%10s|\n", "bonjour");
	printf("|%10s|\n\n", "bonjour");

	ft_printf("|%#10s|\n","bonjour");
	printf("|%#10s|\n","bonjour");
	ft_printf("|%#10s|\n", "bonjour");
	printf("|%#10s|\n\n", "bonjour");

	ft_printf("|%0#10s|\n","bonjour");
	printf("|%0#10s|\n","bonjour");
	ft_printf("|%0#10s|\n", "bonjour");
	printf("|%0#10s|\n\n", "bonjour");

	ft_printf("|%-10s|\n","bonjour");
	printf("|%-10s|\n","bonjour");
	ft_printf("|%-10s|\n", "bonjour");
	printf("|%-10s|\n\n", "bonjour");

	ft_printf("|% 10s|\n","bonjour");
	printf("|% 10s|\n","bonjour");
	ft_printf("|% 10s|\n", "bonjour");
	printf("|% 10s|\n\n", "bonjour");

	ft_printf("|%-#10s|\n","bonjour");
	printf("|%-#10s|\n","bonjour");
	ft_printf("|%+10s|\n", "bonjour");
	printf("|%+10s|\n\n", "bonjour");

	//printf("lapin,% .5d,", 123);
	//printf("lapin,%+.5d,", 123);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:04:34 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/12 12:46:05 by nmougino         ###   ########.fr       */
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

/*
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

	ft_putendl("		pointeur");

	ft_printf("|%#20x|\n","bonjour");
	printf("|%#20x|\n","bonjour");
	ft_printf("|%#20x|\n", "bonjour");
	printf("|%#20x|\n\n", "bonjour");

	ft_printf("|%-#20p|\n", "bonjour");
	printf("|%-#20p|\n", "bonjour");
	ft_printf("|%+20p|\n", "bonjour");
	printf("|%+20p|\n\n", "bonjour");
	int apin = 1;
	char *lapin = &apin;
	ft_printf("|%-#20p|\n",lapin);
	printf("|%-#20p|\n",lapin);
	ft_printf("|%+20p|\n",lapin);
	printf("|%+20p|\n\n", lapin);

	ft_printf("|% 10p|\n","bonjour");
	printf("|% 10p|\n","bonjour");
	ft_printf("|% 10p|\n", "bonjour");
	printf("|% 10p|\n\n", "bonjour");

	ft_putendl("+PRECISION\n");

	ft_printf("|%.5c|\n",'c');
	printf("|%.5c|\n\n",'c');
	ft_printf("|%.5c|\n", 'c');
	printf("|%.5c|\n\n", 'c');

	ft_printf("|%#.5c|\n",'c');
	printf("|%#.5c|\n\n",'c');
	ft_printf("|%#.5c|\n", 'c');
	printf("|%#.5c|\n\n", 'c');

	ft_printf("|%0.5c|\n",'c');
	printf("|%0.5c|\n\n",'c');
	ft_printf("|%0.5c|\n", 'c');
	printf("|%0.5c|\n\n", 'c');

	ft_printf("|%-.5c|\n",'c');
	printf("|%-.5c|\n\n",'c');
	ft_printf("|%-.5c|\n", 'c');
	printf("|%-.5c|\n\n", 'c');

	ft_printf("|% .5c|\n",'c');
	printf("|% .5c|\n\n",'c');
	ft_printf("|% .5c|\n", 'c');
	printf("|% .5c|\n\n", 'c');

	ft_printf("|%+.5c|\n",'c');
	printf("|%+.5c|\n\n",'c');
	ft_printf("|%+.5c|\n", 'c');
	printf("|%+.5c|\n\n", 'c');

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5c|\n",'c');
	printf("|%10.5c|\n",'c');
	ft_printf("|%10.5c|\n", 'c');
	printf("|%10.5c|\n\n", 'c');

	ft_printf("|%#10.5c|\n",'c');
	printf("|%#10.5c|\n",'c');
	ft_printf("|%#10.5c|\n", 'c');
	printf("|%#10.5c|\n\n", 'c');

	ft_printf("|%010.5c|\n",'c');
	printf("|%010.5c|\n",'c');
	ft_printf("|%010.5c|\n", 'c');
	printf("|%010.5c|\n\n", 'c');

	ft_printf("|%-10.5c|\n",'c');
	printf("|%-10.5c|\n",'c');
	ft_printf("|%-10.5c|\n", 'c');
	printf("|%-10.5c|\n\n", 'c');

	ft_printf("|% 10.5c|\n",'c');
	printf("|% 10.5c|\n",'c');
	ft_printf("|% 10.5c|\n", 'c');
	printf("|% 10.5c|\n\n", 'c');

	ft_printf("|%+10.5c|\n",'c');
	printf("|%+10.5c|\n",'c');
	ft_printf("|%+10.5c|\n", 'c');
	printf("|%+10.5c|\n\n", 'c');

	ft_putendl("-PRECIcIcN\n");

	ft_printf("|%10c|\n",'c');
	printf("|%10c|\n",'c');
	ft_printf("|%10c|\n", 'c');
	printf("|%10c|\n\n", 'c');

	ft_printf("|%#10c|\n",'c');
	printf("|%#10c|\n",'c');
	ft_printf("|%#10c|\n", 'c');
	printf("|%#10c|\n\n", 'c');

	ft_printf("|%0#10c|\n",'c');
	printf("|%0#10c|\n",'c');
	ft_printf("|%0#10c|\n", 'c');
	printf("|%0#10c|\n\n", 'c');

	ft_printf("|%-10c|\n",'c');
	printf("|%-10c|\n",'c');
	ft_printf("|%-10c|\n", 'c');
	printf("|%-10c|\n\n", 'c');

	ft_printf("|% 10c|\n",'c');
	printf("|% 10c|\n",'c');
	ft_printf("|% 10c|\n", 'c');
	printf("|% 10c|\n\n", 'c');

	ft_printf("|%-#10c|\n",'c');
	printf("|%-#10c|\n",'c');
	ft_printf("|%+10c|\n", 'c');
	printf("|%+10c|\n\n", 'c');

	ft_printf("|%010.5c|\n",'c');
	printf("|%010.5c|\n",'c');
	ft_printf("|%010.5c|\n", 'c');
	printf("|%010.5c|\n\n", 'c');


	ft_putendl("		D\n");

	ft_putendl("+PRECISION\n");

	ft_printf("|%.5D|\n", 123);
	printf("|%.5D|\n\n", 123);
	ft_printf("|%.5D|\n", -123);
	printf("|%.5D|\n\n", -123);

	ft_printf("|%#.5D|\n", 123);
	printf("|%#.5D|\n\n", 123);
	ft_printf("|%#.5D|\n", -123);
	printf("|%#.5D|\n\n", -123);

	ft_printf("|%0.5D|\n", 123);
	printf("|%0.5D|\n\n", 123);
	ft_printf("|%0.5D|\n", -123);
	printf("|%0.5D|\n\n", -123);

	ft_printf("|%-.5D|\n", 123);
	printf("|%-.5D|\n\n", 123);
	ft_printf("|%-.5D|\n", -123);
	printf("|%-.5D|\n\n", -123);

	ft_printf("|% .5D|\n", 123);
	printf("|% .5D|\n\n", 123);
	ft_printf("|% .5D|\n", -123);
	printf("|% .5D|\n\n", -123);

	ft_printf("|%+.5D|\n", 123);
	printf("|%+.5D|\n\n", 123);
	ft_printf("|%+.5D|\n", -123);
	printf("|%+.5D|\n\n", -123);

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5D|\n", 123);
	printf("|%10.5D|\n", 123);
	ft_printf("|%10.5D|\n", -123);
	printf("|%10.5D|\n\n", -123);

	ft_printf("|%#10.5D|\n", 123);
	printf("|%#10.5D|\n", 123);
	ft_printf("|%#10.5D|\n", -123);
	printf("|%#10.5D|\n\n", -123);

	ft_printf("|%010.5D|\n", 123);
	printf("|%010.5D|\n", 123);
	ft_printf("|%010.5D|\n", -123);
	printf("|%010.5D|\n\n", -123);

	ft_printf("|%-10.5D|\n", 123);
	printf("|%-10.5D|\n", 123);
	ft_printf("|%-10.5D|\n", -123);
	printf("|%-10.5D|\n\n", -123);

	ft_printf("|% 10.5D|\n", 123);
	printf("|% 10.5D|\n", 123);
	ft_printf("|% 10.5D|\n", -123);
	printf("|% 10.5D|\n\n", -123);

	ft_printf("|%+10.5D|\n", 123);
	printf("|%+10.5D|\n", 123);
	ft_printf("|%+10.5D|\n", -123);
	printf("|%+10.5D|\n\n", -123);

	ft_putendl("-PRECISION\n");

	ft_printf("|%10D|\n", 123);
	printf("|%10D|\n", 123);
	ft_printf("|%10D|\n", -123);
	printf("|%10D|\n\n", -123);

	ft_printf("|%#10D|\n", 123);
	printf("|%#10D|\n", 123);
	ft_printf("|%#10D|\n", -123);
	printf("|%#10D|\n\n", -123);

	ft_printf("|%0#10D|\n", 123);
	printf("|%0#10D|\n", 123);
	ft_printf("|%0#10D|\n", -123);
	printf("|%0#10D|\n\n", -123);

	ft_printf("|%-10D|\n", 123);
	printf("|%-10D|\n", 123);
	ft_printf("|%-10D|\n", -123);
	printf("|%-10D|\n\n", -123);

	ft_printf("|% 10D|\n", 123);
	printf("|% 10D|\n", 123);
	ft_printf("|% 10D|\n", -123);
	printf("|% 10D|\n\n", -123);

	ft_printf("|%-#10D|\n", 123);
	printf("|%-#10D|\n", 123);
	ft_printf("|%+10D|\n", -123);
	printf("|%+10D|\n\n", -123);


	ft_putendl("		O\n");

	ft_putendl("+PRECISION\n");

	ft_printf("|%.5O|\n", 123);
	printf("|%.5O|\n\n", 123);
	ft_printf("|%.5O|\n", -123);
	printf("|%.5O|\n\n", -123);

	ft_printf("|%#.5O|\n", 123);
	printf("|%#.5O|\n\n", 123);
	ft_printf("|%#.5O|\n", -123);
	printf("|%#.5O|\n\n", -123);

	ft_printf("|%0.5O|\n", 123);
	printf("|%0.5O|\n\n", 123);
	ft_printf("|%0.5O|\n", -123);
	printf("|%0.5O|\n\n", -123);

	ft_printf("|%-.5O|\n", 123);
	printf("|%-.5O|\n\n", 123);
	ft_printf("|%-.5O|\n", -123);
	printf("|%-.5O|\n\n", -123);

	ft_printf("|% .5O|\n", 123);
	printf("|% .5O|\n\n", 123);
	ft_printf("|% .5O|\n", -123);
	printf("|% .5O|\n\n", -123);

	ft_printf("|%+.5O|\n", 123);
	printf("|%+.5O|\n\n", 123);
	ft_printf("|%+.5O|\n", -123);
	printf("|%+.5O|\n\n", -123);

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5O|\n", 123);
	printf("|%10.5O|\n", 123);
	ft_printf("|%10.5O|\n", -123);
	printf("|%10.5O|\n\n", -123);

	ft_printf("|%#10.5O|\n", 123);
	printf("|%#10.5O|\n", 123);
	ft_printf("|%#10.5O|\n", -123);
	printf("|%#10.5O|\n\n", -123);

	ft_printf("|%010.5O|\n", 123);
	printf("|%010.5O|\n", 123);
	ft_printf("|%010.5O|\n", -123);
	printf("|%010.5O|\n\n", -123);

	ft_printf("|%-10.5O|\n", 123);
	printf("|%-10.5O|\n", 123);
	ft_printf("|%-10.5O|\n", -123);
	printf("|%-10.5O|\n\n", -123);

	ft_printf("|% 10.5O|\n", 123);
	printf("|% 10.5O|\n", 123);
	ft_printf("|% 10.5O|\n", -123);
	printf("|% 10.5O|\n\n", -123);

	ft_printf("|%+10.5O|\n", 123);
	printf("|%+10.5O|\n", 123);
	ft_printf("|%+10.5O|\n", -123);
	printf("|%+10.5O|\n\n", -123);

	ft_putendl("-PRECISION\n");

	ft_printf("|%10O|\n", 123);
	printf("|%10O|\n", 123);
	ft_printf("|%10O|\n", -123);
	printf("|%10O|\n\n", -123);

	ft_printf("|%#10O|\n", 123);
	printf("|%#10O|\n", 123);
	ft_printf("|%#10O|\n", -123);
	printf("|%#10O|\n\n", -123);

	ft_printf("|%0#10O|\n", 123);
	printf("|%0#10O|\n", 123);
	ft_printf("|%0#10O|\n", -123);
	printf("|%0#10O|\n\n", -123);

	ft_printf("|%-10O|\n", 123);
	printf("|%-10O|\n", 123);
	ft_printf("|%-10O|\n", -123);
	printf("|%-10O|\n\n", -123);

	ft_printf("|% 10O|\n", 123);
	printf("|% 10O|\n", 123);
	ft_printf("|% 10O|\n", -123);
	printf("|% 10O|\n\n", -123);

	ft_printf("|%-#10O|\n", 123);
	printf("|%-#10O|\n", 123);
	ft_printf("|%+10O|\n", -123);
	printf("|%+10O|\n\n", -123);

	*/


	ft_putendl("		U\n");

	ft_putendl("+PRECISIUN\n");

	ft_printf("|%.5U|\n", 123);
	printf("|%.5U|\n\n", 123);
	ft_printf("|%.5U|\n", -123);
	printf("|%.5U|\n\n", -123);

	ft_printf("|%#.5U|\n", 123);
	printf("|%#.5U|\n\n", 123);
	ft_printf("|%#.5U|\n", -123);
	printf("|%#.5U|\n\n", -123);

	ft_printf("|%0.5U|\n", 123);
	printf("|%0.5U|\n\n", 123);
	ft_printf("|%0.5U|\n", -123);
	printf("|%0.5U|\n\n", -123);

	ft_printf("|%-.5U|\n", 123);
	printf("|%-.5U|\n\n", 123);
	ft_printf("|%-.5U|\n", -123);
	printf("|%-.5U|\n\n", -123);

	ft_printf("|% .5U|\n", 123);
	printf("|% .5U|\n\n", 123);
	ft_printf("|% .5U|\n", -123);
	printf("|% .5U|\n\n", -123);

	ft_printf("|%+.5U|\n", 123);
	printf("|%+.5U|\n\n", 123);
	ft_printf("|%+.5U|\n", -123);
	printf("|%+.5U|\n\n", -123);

	ft_putendl("\n\n+MFW\n");

	ft_printf("|%10.5U|\n", 123);
	printf("|%10.5U|\n", 123);
	ft_printf("|%10.5U|\n", -123);
	printf("|%10.5U|\n\n", -123);

	ft_printf("|%#10.5U|\n", 123);
	printf("|%#10.5U|\n", 123);
	ft_printf("|%#10.5U|\n", -123);
	printf("|%#10.5U|\n\n", -123);

	ft_printf("|%010.5U|\n", 123);
	printf("|%010.5U|\n", 123);
	ft_printf("|%010.5U|\n", -123);
	printf("|%010.5U|\n\n", -123);

	ft_printf("|%-10.5U|\n", 123);
	printf("|%-10.5U|\n", 123);
	ft_printf("|%-10.5U|\n", -123);
	printf("|%-10.5U|\n\n", -123);

	ft_printf("|% 10.5U|\n", 123);
	printf("|% 10.5U|\n", 123);
	ft_printf("|% 10.5U|\n", -123);
	printf("|% 10.5U|\n\n", -123);

	ft_printf("|%+10.5U|\n", 123);
	printf("|%+10.5U|\n", 123);
	ft_printf("|%+10.5U|\n", -123);
	printf("|%+10.5U|\n\n", -123);

	ft_putendl("-PRECISIUN\n");

	ft_printf("|%10U|\n", 123);
	printf("|%10U|\n", 123);
	ft_printf("|%10U|\n", -123);
	printf("|%10U|\n\n", -123);

	ft_printf("|%#10U|\n", 123);
	printf("|%#10U|\n", 123);
	ft_printf("|%#10U|\n", -123);
	printf("|%#10U|\n\n", -123);

	ft_printf("|%0#10U|\n", 123);
	printf("|%0#10U|\n", 123);
	ft_printf("|%0#10U|\n", -123);
	printf("|%0#10U|\n\n", -123);

	ft_printf("|%-10U|\n", 123);
	printf("|%-10U|\n", 123);
	ft_printf("|%-10U|\n", -123);
	printf("|%-10U|\n\n", -123);

	ft_printf("|% 10U|\n", 123);
	printf("|% 10U|\n", 123);
	ft_printf("|% 10U|\n", -123);
	printf("|% 10U|\n\n", -123);

	ft_printf("|%-#10U|\n", 123);
	printf("|%-#10U|\n", 123);
	ft_printf("|%+10U|\n", -123);
	printf("|%+10U|\n\n", -123);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:06:49 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/03 19:06:15 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <unistd.h>
# include <stdarg.h>

# define BUF_SIZE	1024

//# ifdef WINDIR
	typedef long	intmax_t;
	typedef unsigned long	uintmax_t;
//# endif

enum				e_hljz
{
	E_NO = 0,
	E_HH,
	E_H,
	E_L,
	E_LL,
	E_J,
	E_Z
};

enum				e_type
{
	E_CHAR = 0,
	E_SHORT,
	E_INT,
	E_LONG,
	E_LLONG,
	E_SIZE_T,
	E_INTMAX
};

typedef struct		s_print
{
	char			buf[BUF_SIZE];
	unsigned int	pos;
	va_list			ap;
	void			*convftab[14];
	int				ans;
}					t_print;

typedef struct		s_spec
{
	//	flags:		X_X_X_#_0_-_' '_+
	char			flags;
	unsigned int	mfw;
	int				prec;
	char			hljz;
	char			conv;
}					t_spec;


int					ft_printf(const char *format, ...);

void				addto(char c, t_print *print);

int					setflag(t_spec *spec, const char *str);
int					setmfwi(t_spec *spec, const char *str);
int					setprec(t_spec *spec, const char *str);
int					setmodi(t_spec *spec, const char *str);
int					setconv(t_spec *spec, const char *str);

int					conv_s(t_spec *spec, t_print *print);
int					conv_S(t_spec *spec, t_print *print);
int					conv_p(t_spec *spec, t_print *print);
int					conv_d(t_spec *spec, t_print *print);
int					conv_D(t_spec *spec, t_print *print);
int					conv_i(t_spec *spec, t_print *print);
int					conv_o(t_spec *spec, t_print *print);
int					conv_O(t_spec *spec, t_print *print);
int					conv_u(t_spec *spec, t_print *print);
int					conv_U(t_spec *spec, t_print *print);
int					conv_x(t_spec *spec, t_print *print);
int					conv_X(t_spec *spec, t_print *print);
int					conv_c(t_spec *spec, t_print *print);
int					conv_C(t_spec *spec, t_print *print);

int					conv(t_spec *spec, t_print *print);

intmax_t			recupparam(int type, va_list ap);
uintmax_t			urecupparam(int type, va_list ap);

/*
// ne pas malloc,
// writer une seule fois.

nouvel itoa:

itoawrite(buffer, int);
ecrire dans un buffer statique de 1024
si il atteint 1024, l'ecrire sur l'ecran, le vider puis reecrire dedans.

a la fin de printf, on vide le buffer;

char	tab[1024];
a declarer au debut de printf
il est auto free a la fin de la fonction;
->>> commencer par l'empirisme


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
	**	flags					8bits : '#' '0' '-' ' ' '+' 0 0 precision?
	**	minimum field width
	**	precision -> precision = 0 != !precision
	**	modifiers


	char			flags;
	unsigned int	mfw;
	unsigned int	precision;
	int				modifiers;
	char			conv;
	type			param;
}					t_spec





int		conversion_type(t_spec spec)
{
	type	param = (type)ft_cast(spec->signe, (spec->modifier ??? spec=>conv));
	//mise en forme
	//selon les flags, la longueur minimum de champ et la precision
	ft_puttype(param);
	return (ft_typelen(param));
}

%s

-> (char *)va_arg(ap, long)
ft_putstrinto(lapin, buffer);
-> FT_STRCPY

un pointeur est un ulong ou un long?? -> identiques sur nos macs

%p

-> ulong en hexa;


recuperation du parametre
conversion du parametre
verification taille buffer + taille param < 1024
non : vidage du buffer

ecriture dans le buffer

cas de %s:
	comme ft_putstr
	caractere par caractere dans le buffer
	en verifiant le depassement

*/
/*
????	ft_cast(int signed, int modifier)
intmax lapin;
uintmax ulapin;

ou deux fonctions

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

#endif

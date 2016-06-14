/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 18:06:49 by nmougino          #+#    #+#             */
/*   Updated: 2016/06/14 17:10:49 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <unistd.h>
# include <stdarg.h>

# define BUF_SIZE	3

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
	E_INT = 0,
	E_CHAR,
	E_SHORT,
	E_LONG,
	E_LLONG,
	E_INTMAX,
	E_SIZE_T
};

enum				e_flags
{
	E_SHARP = 1 << 4,
	E_ZERO = 1 << 3,
	E_DASH = 1 << 2,
	E_SPACE = 1 << 1,
	E_PLUS = 1
};

typedef struct		s_spec
{
	char			flags;
	int				mfw;
	int				prec;
	char			hljz;
	char			conv;
}					t_spec;

typedef struct		s_print
{
	char			buf[BUF_SIZE];
	unsigned int	pos;
	va_list			ap;
	void			*convftab[15];
	int				ans;
	t_spec			*spec;
}					t_print;

int					ft_printf(const char *format, ...);

void				applyplusspace(t_print *print, t_spec *spec, int s);
void				applysharp(t_print *print, t_spec *spec);
void				applymfw(t_print *print, t_spec *spec, int mfw);
void				applynumprec(t_print *print, t_spec *spec, int len);

void				addto(char c, t_print *print);

int					setflag(t_spec *spec, const char *str);
int					setmfwi(t_spec *spec, const char *str);
int					setprec(t_spec *spec, const char *str);
int					setmodi(t_spec *spec, const char *str);
int					setconv(t_spec *spec, const char *str);

void				conv_b(t_spec *spec, t_print *print);
void				conv_s(t_spec *spec, t_print *print);
void				conv_ls(t_spec *spec, t_print *print);
void				conv_p(t_spec *spec, t_print *print);
void				conv_d(t_spec *spec, t_print *print);
void				conv_ld(t_spec *spec, t_print *print);
void				conv_i(t_spec *spec, t_print *print);
void				conv_o(t_spec *spec, t_print *print);
void				conv_lo(t_spec *spec, t_print *print);
void				conv_u(t_spec *spec, t_print *print);
void				conv_lu(t_spec *spec, t_print *print);
void				conv_x(t_spec *spec, t_print *print);
void				conv_bx(t_spec *spec, t_print *print);
void				conv_c(t_spec *spec, t_print *print);
void				conv_lc(t_spec *spec, t_print *print);

int					conv(t_spec *spec, t_print *print, const char *format);

void				sitoa(intmax_t p, t_print *print, int l);
void				uitoabase(uintmax_t p, char *base, t_print *print, int l);

intmax_t			recupparam(int type, va_list ap);
uintmax_t			urecupparam(int type, va_list ap);

#endif

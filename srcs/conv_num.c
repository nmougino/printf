#include "ft_printf.h"

void	conv_i(t_spec *spec, t_print *print)
{
	int			i;
	intmax_t	p;

 	p = recupparam(spec->hljz, print->ap);
	i = (p < 0) || (spec->flags & 3);
	++spec->mfw;
	(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : --spec->mfw;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(ft_max(spec->prec + i, ft_nbrlen(ft_abs(p)) + i))) : 0;
	!(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : 0;
	applynumprec(print, spec, ft_nbrlen(ft_abs(p)));
	sitoa(p, print, ft_nbrlen(ft_abs(p)));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_d(t_spec *spec, t_print *print)
{
	int			i;
	intmax_t	p;

 	p = recupparam(spec->hljz, print->ap);
	i = (p < 0) || (spec->flags & 3);
	++spec->mfw;
	(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : --spec->mfw;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(ft_max(spec->prec + i, ft_nbrlen(ft_abs(p)) + i))) : 0;
	!(spec->flags & E_ZERO) ? applyplusspace(print, spec, p >= 0) : 0;
	applynumprec(print, spec, ft_nbrlen(ft_abs(p)));
	sitoa(p, print, ft_nbrlen(ft_abs(p)));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_x(t_spec *spec, t_print *print)
{
	int			i;
	uintmax_t	p;

 	p = urecupparam(spec->hljz, print->ap);
	i = ((spec->flags & E_SHARP && !(spec->flags & E_ZERO)) ? 2 : 0);
	(spec->flags & E_ZERO) ? applysharp(print, spec) : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(i + ft_max(spec->prec, ft_nbrlenbase(p, 16)))) : 0;
	(!(spec->flags & E_ZERO)) ? applysharp(print, spec) : 0;
	applynumprec(print, spec, ft_nbrlenbase(p, 16));
	uitoabase(p, "0123456789abcdef", print, ft_nbrlenbase(p, 16));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_X(t_spec *spec, t_print *print)
{
	int			i;
	uintmax_t	p;

 	p = urecupparam(spec->hljz, print->ap);
	i = ((spec->flags & E_SHARP && !(spec->flags & E_ZERO)) ? 2 : 0);
	(spec->flags & E_ZERO) ? applysharp(print, spec) : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(i + ft_max(spec->prec, ft_nbrlenbase(p, 16)))) : 0;
	(!(spec->flags & E_ZERO)) ? applysharp(print, spec) : 0;
	applynumprec(print, spec, ft_nbrlenbase(p, 16));
	uitoabase(p, "0123456789ABCDEF", print, ft_nbrlenbase(p, 16));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_o(t_spec *spec, t_print *print)
{
	int			i;
	uintmax_t	p;

 	p = urecupparam(spec->hljz, print->ap);
	i = (spec->flags & E_SHARP && !(spec->flags & E_ZERO));
	(spec->flags & E_ZERO) ? applysharp(print, spec) : 0;
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(((spec->prec == -1) ? i : 0) + ft_max(spec->prec, ft_nbrlenbase(p, 8)))) : 0;
	(!(spec->flags & E_ZERO)) ? applysharp(print, spec) : 0;
	applynumprec(print, spec, i + ft_nbrlenbase(p, 8));
	uitoabase(p, "01234567", print, ft_nbrlenbase(p, 8));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_u(t_spec *spec, t_print *print)
{
	uintmax_t	p;

 	p = urecupparam(spec->hljz, print->ap);
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw -
		(ft_max(spec->prec, ft_nbrlenbase(p, 10)))) : 0;
	applynumprec(print, spec, ft_nbrlenbase(p, 10));
	uitoabase(p, "0123456789", print, ft_nbrlenbase(p, 10));
	(spec->flags & E_DASH) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_D(t_spec *spec, t_print *print)
{
	spec->hljz = ((spec->flags == E_L) ? E_LL : E_L);
	spec->conv = 'd';
	conv_d(spec, print);
}

void	conv_O(t_spec *spec, t_print *print)
{
	spec->hljz = ((spec->flags == E_L) ? E_LL : E_L);
	spec->conv = 'o';
	conv_o(spec, print);
}


void	conv_U(t_spec *spec, t_print *print)
{
	spec->hljz = ((spec->flags == E_L) ? E_LL : E_L);
	spec->conv = 'u';
	conv_u(spec, print);
}

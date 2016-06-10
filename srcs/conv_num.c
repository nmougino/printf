#include "ft_printf.h"

static void	uitoabase(uintmax_t p, char *base, t_print *print, int l)
{
	char	c[l + 1];
	char	baselen;

	baselen = ft_strlen(base);
	c[l] = 0;
	while (l--)
	{
		c[l] = base[p % baselen];
		p /= baselen;
	}
	l = 0;
	while (c[l])
	{
		addto(c[l], print);
		++l;
	}
}

static void	sitoa(intmax_t p, t_print *print, int l)
{

	char	c[l + 1];

	c[l] = 0;
	p = ft_abs(p);
	while (l--)
	{
		c[l] = p % 10 + '0';
		p /= 10;
	}
	l = 0;
	while (c[l])
	{
		addto(c[l], print);
		++l;
	}
}

void	conv_i(t_spec *spec, t_print *print)
{
	int			i;
	intmax_t	p;

 	p = recupparam(spec->hljz, print->ap);
	i = (p < 0) || (spec->flags & 3);
	++spec->mfw;
	(spec->flags & (1 << 3)) ? applyplusspace(print, spec, p > 0) : --spec->mfw;
	(!(spec->flags & (1 << 2))) ? applymfw(print, spec, spec->mfw -
		(ft_max(spec->prec + i, ft_nbrlen(ft_abs(p)) + i))) : 0;
	!(spec->flags & (1 << 3)) ? applyplusspace(print, spec, p > 0) : 0;
	applynumprec(print, spec, ft_nbrlen(ft_abs(p)));
	sitoa(p, print, ft_nbrlen(ft_abs(p)));
	(spec->flags & (1 << 2)) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_d(t_spec *spec, t_print *print)
{
	int			i;
	intmax_t	p;

 	p = recupparam(spec->hljz, print->ap);
	i = (p < 0) || (spec->flags & 3);
	++spec->mfw;
	(spec->flags & (1 << 3)) ? applyplusspace(print, spec, p > 0) : --spec->mfw;
	(!(spec->flags & (1 << 2))) ? applymfw(print, spec, spec->mfw -
		(ft_max(spec->prec + i, ft_nbrlen(ft_abs(p)) + i))) : 0;
	!(spec->flags & (1 << 3)) ? applyplusspace(print, spec, p > 0) : 0;
	applynumprec(print, spec, ft_nbrlen(ft_abs(p)));
	sitoa(p, print, ft_nbrlen(ft_abs(p)));
	(spec->flags & (1 << 2)) ? applymfw(print, spec, spec->mfw) : 0;
}

void	conv_o(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	applysharp(print, spec);
	uitoabase(p, "01234567", print, ft_nbrlenbase(p, 8));
}

void	conv_u(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	uitoabase(p, "0123456789", print, ft_nbrlen(p));
}

void	conv_x(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	uitoabase(p, "0123456789abcdef", print, ft_nbrlenbase(p, 16));
}

void	conv_X(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	uitoabase(p, "0123456789ABCDEF", print, ft_nbrlenbase(p, 16));
}

void	conv_D(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
}


void	conv_O(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
}


void	conv_U(t_spec *spec, t_print *print)
{
	spec = NULL;
	print = NULL;
	ft_putendl("FONCTION DE CONVERSION NON TERMINEE");
}

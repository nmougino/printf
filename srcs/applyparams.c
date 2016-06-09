#include "ft_printf.h"

void	applyplusspace(t_print *print, t_spec *spec, int s)
{
		if (!s)
			addto('-', print);
		else if (spec->flags & 1)
			addto('+', print);
		else if (spec->flags & (1 << 1))
			addto(' ', print);
}

void	applyzero(t_print *print, t_spec *spec, int len)
{
	int	mfw;

	mfw = spec->mfw - len;
	if (spec->prec == -1 && mfw > 0)
		while (mfw--)
			addto('0', print);
}

void	applysharp(t_print *print, t_spec *spec)
{
	if (spec->flags & (1 << 4))
	{
		if (spec->conv == 'o')
			addto('0', print);
		else if (ft_strchr("xX", spec->conv))
		{
			addto('0', print);
			addto(spec->conv, print);
		}
	}
}

void	applymfw(t_print *print, t_spec *spec, int mfw)
{
	if (spec->flags & 3)
		--mfw;
	while (mfw > 0)
	{
		addto(' ', print);
		--mfw;
	}
}

void	applynumprec(t_print *print, t_spec *spec, int len)
{
	while ((spec->prec - len) > 0)
	{
		addto('0', print);
		spec->prec--;
	}
}

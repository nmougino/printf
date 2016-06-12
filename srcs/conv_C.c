#include "ft_printf.h"

static void	adduni(uintmax_t p, int nbbi, t_print *print)
{
	if (nbbi >= 1 && nbbi <= 7)
		addto(p, print);
	else if (nbbi >= 8 && nbbi <= 11)
	{
		addto((3 << 6) | (p >> 6), print);
		addto((1 << 7) | (63 & p), print);
	}
	else if (nbbi >= 12 && nbbi <= 16)
	{
		addto((7 << 5) | (p >> 12), print);
		addto((1 << 7) | (63 & (p >> 6)), print);
		addto((1 << 7) | (63 & p), print);
	}
	else if (nbbi >= 17 && nbbi <= 21)
	{
		addto((15 << 4) | (p >> 18), print);
		addto((1 << 7) | (63 & (p >> 12)), print);
		addto((1 << 7) | (63 & (p >> 6)), print);
		addto((1 << 7) | (63 & p), print);
	}
}

void	conv_C(t_spec *spec, t_print *print)
{
	uintmax_t	p;
	int			nbbi;

	p = urecupparam(spec->hljz, print->ap);
	nbbi = ft_nbrlenbase(p, 2);
	(!(spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw - 1) : 0;
	adduni(p, nbbi, print);
	((spec->flags & E_DASH)) ? applymfw(print, spec, spec->mfw) : 0;
}

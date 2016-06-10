#include "ft_printf.h"

void	sitoa(intmax_t p, t_print *print, int l)
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

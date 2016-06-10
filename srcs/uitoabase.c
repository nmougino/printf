#include "ft_printf.h"

void	uitoabase(uintmax_t p, char *base, t_print *print, int l)
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

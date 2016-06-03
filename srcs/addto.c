#include "ft_printf.h"

void	addto(char c, t_print *print)
{
	if (++(print->pos) >= BUF_SIZE)
	{
		write(1, print->buf, BUF_SIZE);
		(print->pos) = 0;
	}
	print->buf[print->pos] = c;
	++(print->pos);
	++(print->ans);
}

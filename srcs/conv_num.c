
static void	uitoabase(uintmax_t p, char *base, t_print *print, int l)
{
	int		n;
	char	c[l + 1];
	char	baselen;

	baselen = ft_strlen(base);
	c[l] = 0;
	while (l--)
	{
		c[l] = base[p % baselen];
		p /= baselen;
	}
	while (c[l])
		addto(c[l], print);
}

static void	sitoa(intmax_t p, t_print *print, int l)
{
	int		n;
	char	c[l + 1];

	c[l] = 0;
	if (p < 0)
		addto('-', print);
	while (l--)
	{
		c[l] = p % 10 + '0';
		p /= 10;
	}
	while (c[l])
		addto(c[l], print);
}

void	conv_i(t_spec *spec, t_print *print)
{
	intmax_t	p;

 	p = recupparam(spec->hljz, print->ap);
	sitoa(p, print, ft_nbrlen(ft_abs(p)));
}

void	conv_d(t_spec *spec, t_print *print)
{
	intmax_t	p;

 	p = recupparam(spec->hljz, print->ap);
	sitoa(p, print, ft_nbrlen(ft_abs(p)));
}

void	conv_o(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	uitoabase(p, "01234567", print, ft_nbrlenbase(l, 8));
}

void	conv_u(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	uitoabase(p, "0123456789", print, ft_nbrlen(l));
}

void	conv_x(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	uitoabase(p, "0123456789abcdef", print, ft_nbrlenbase(l, 16));
}

void	conv_X(t_spec *spec, t_print *print)
{
	uintmax_t	p;

	p = urecupparam(spec->hljz, print->ap);
	uitoabase(p, "0123456789ABCDEF", print, ft_nbrlenbase(l, 16));
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

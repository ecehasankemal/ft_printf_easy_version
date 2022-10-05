#include "ft_printf.h"

int	main(void)
{
		char	a;
		char	*b;
		int		c;
		int		d;
		int		e;
		int		f;
		unsigned int	kurgu;
		int	data;

		a = 's';
		b = "hasan";
		c = 5;
		d = 10;
		e = -10;
		kurgu = 12345;
		data = 29;
		ft_printf("bu bir denemedir = %c\n", a);
		ft_printf("bu bir denemedir = %s\n", b);
		ft_printf("bu bir denemedir = %d || %i\n", c, c);
		ft_printf("bu bir denemedir = %u || %u\n", d, e);
		f = ft_printf("son deneme\n");
		ft_printf("%d\n", f);
		ft_printf("bu bir denemdir = %u\n", kurgu);
		ft_printf("bu bir denemedir = %x\n", data);
		ft_printf("bu bir denemedir = %p\n", data);
}

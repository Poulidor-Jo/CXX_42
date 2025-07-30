#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		ft_alpha_mirror(int c)
{
if (c >= 'A' && c <= 'Z')
	return 'Z' - (c - 'A');
else if (c >= 'a' && c <= 'z')
	return 'z' - (c - 'a');
else
	return c;
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			if (ft_isalpha(*av[1]))
				ft_putchar(ft_alpha_mirror(*(av[1]++)));
			else
				write(1, av[1]++, 1);
		}
	}
	write(1, "\n", 1);
	return (1);
}
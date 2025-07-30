#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	main(int ac, char **av)
{
    int i = 0;
    int start = 0;
    int end = 0;

    if (ac == 2)
    {
        // Trouver la fin de la chaîne
        while (av[1][i])
            i++;
        i--;
        // Sauter les espaces/tabs à la fin
        while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        end = i;
        // Trouver le début du dernier mot
        while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
            i--;
        start = i + 1;
        // Afficher le dernier mot
        while (start <= end)
            ft_putchar(av[1][start++]);
    }
    ft_putchar('\n');
    return (0);
}
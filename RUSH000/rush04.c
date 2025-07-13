/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:58:57 by hoboukha          #+#    #+#             */
/*   Updated: 2025/07/13 12:00:53 by hoboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	x;

	x = -1;
	while (str[++x])
		write(1, &str[x], 1);
}

int	ft_atoi_rush(char *str)
{
	int	i;
	int	result;

	result = 0;
	i = -1;
	while (str[++i])
	{
		if (result > (2147483647 - (str[i] - '0')) / 10)
			return (-1);
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		result *= 10;
		result += (str[i] - '0');
	}
	return (result);
}

void	ft_print_line(char start_l, char between_l, char end_l, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i == 0)
			ft_putchar(start_l);
		else if (i == size - 1)
			ft_putchar(end_l);
		else
			ft_putchar(between_l);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_print_line('A', 'B', 'C', x);
		else if (i == y - 1)
			ft_print_line('C', 'B', 'A', x);
		else
			ft_print_line('B', ' ', 'B', x);
		if (x != 0)
			ft_putchar('\n');
		i++;
	}
}

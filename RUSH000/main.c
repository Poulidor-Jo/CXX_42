/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:58:50 by hoboukha          #+#    #+#             */
/*   Updated: 2025/07/12 15:00:59 by hoboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_rush(char *str);
void	ft_putstr(char *str);
void	rush(int x, int y);

int	main(int arc, char **arv)
{
	int	x;
	int	y;

	if (arc != 3)
	{
		ft_putstr("ERROR  : Invalid arguments numbers.\n");
		ft_putstr("FORMAT : ./exec [length] [height]\n");
		return (1);
	}
	x = ft_atoi_rush(arv[1]);
	y = ft_atoi_rush(arv[2]);
	if (x == -1 || y == -1)
	{
		ft_putstr("ERROR  : Layer 8 issue, invalid format.\n");
		ft_putstr("Please enter a valid number.\n");
		return (1);
	}
	rush(x, y);
	return (0);
}

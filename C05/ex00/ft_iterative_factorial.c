/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:57:18 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/17 10:51:41 by jmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	start;

	start = nb - 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (start != 0)
	{
		nb *= start;
		start--;
	}
	return (nb);
}
/* #include <stdio.h>

int	main(void)
{
	printf("facteur de 3 est : %d", ft_iterative_factorial(3));
} */
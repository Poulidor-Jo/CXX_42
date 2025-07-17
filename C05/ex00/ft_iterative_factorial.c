/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:11:03 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/17 09:57:14 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	start;

	start = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (start != 0)
	{
		nb *= start;
		start--;
	}
	return (nb);
}
/*#include <stdio.h>

int	main()
{
	printf("Facteur de 3 est : %d", ft_iterative_factorial(3));
}*/

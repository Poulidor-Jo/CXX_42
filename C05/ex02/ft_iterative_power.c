/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:51:24 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/18 12:54:53 by jmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/* #include<stdio.h>
int	main(void)
{
	printf("Le resultat de 2 puissance 3 est %d",ft_iterative_power(0,0));
} */
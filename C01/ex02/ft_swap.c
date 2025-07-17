/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:03:14 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/10 12:25:28 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*#include <stdio.h>

int	main(void)
{
	int	valeur1 = 20;
	int	valeur2 = 42;
	int	*a = &valeur1;
	int	*b = &valeur2;

	printf("Avant mon  swap : \n");
	printf("Valeur de a = %d \n", *a);

	ft_swap(a,b);

	printf("Apres mon swap : \n");
	printf("Valeur de a = %d", *a);
		
}*/

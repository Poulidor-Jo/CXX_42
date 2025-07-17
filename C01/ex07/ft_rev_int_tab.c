/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:16:21 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/10 12:03:35 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ri;
	int	swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
/*#include<stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	size = 6;
	
	ft_rev_int_tab(tab, size);

	for (int i = 0; i < size; i++)
		printf("%d",tab[i]);
	return 0;
}*/

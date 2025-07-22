/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:10:09 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/26 09:22:36 by jmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	tab = (int *)malloc((max - min) * sizeof(int *));
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;
	int	y;
	int	min;
	int	max;

	max = 98;
	min = 36;
	y = 0;
	range = NULL;
	i = ft_ultimate_range(&range, min, max);
	while (min < max)
	{
		printf("%d\n", range[y]);
		y++;
		min++;
	}
	printf("\n%d", i);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:32:04 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/23 13:24:08 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	tab = 0;
	min = 4;
	max = 9;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}*/

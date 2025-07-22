/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:06:58 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/26 09:21:59 by jmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*dest;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 5;
	max = 15;
	dest = ft_range(min,max);
	while (min < max)
	{
		printf("%d  ", dest[i]);
		i++;
		min++;
	}
	return (0);
}*/
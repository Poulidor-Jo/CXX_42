/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <jormoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 08:51:43 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/23 13:33:20 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = malloc(sizeof(int) * (max - min) + 1);
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	if (array != NULL)
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		*range = array;
		return (i);
	}
	else
		return (-1);
}

int	main(void)
	/*{
		int	min;
		int	max;
		int	i;
		int	*range;
		int	size;

		i = 0;
		min = 2;
		max = 10;
		size = ft_ultimate_range(&range, min, max);
		while (i < size)
		{
			printf("%d\n", range[i]);
			i++;
		}

	}*/

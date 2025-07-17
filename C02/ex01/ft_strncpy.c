/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:50:36 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/14 13:53:02 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	src[] = "Hello world";
	char	dest[50];

	ft_strncpy(dest, src, 5);
	dest[5] = '\0';
	printf("src : %s\ndest (5) : %s\n", src, dest);
	return(0);
}*/

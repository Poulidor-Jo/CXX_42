/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:00:39 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/15 11:47:24 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (src[k] != '\0' && k < nb)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	dest[20] = "Hello, ";
	char	src[] = "world!";

	unsigned int	nb = 5;

	printf("Avant ft_strncat : %s", dest);
	
	ft_strncat(dest, src, nb);

	printf("Apres ft_strncat : %s", dest);
	return(0);
}*/

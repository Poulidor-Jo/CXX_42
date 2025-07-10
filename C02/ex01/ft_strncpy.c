/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:01:57 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/06/16 23:01:58 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;

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
int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];  // Taille plus grande que nécessaire
	pour illustrer le remplissage par des '\0'

	// Appel de la fonction ft_strncpy
	ft_strncpy(dest, src, 5);

	// Affichage du résultat de la copie
	printf("Source: %s\n", src);
	printf("Dest après ft_strncpy: %s\n", dest);

	return 0;
}*/

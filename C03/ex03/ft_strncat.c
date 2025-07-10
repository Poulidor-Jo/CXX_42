/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 07:28:52 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/11 14:34:37 by jmoret           ###   ########.fr       */
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

int main(void)
{
	
	char dest[20] = "Hello, ";
	char src[] = "world!";
	
	unsigned int nb = 5;

	printf("Avant ft_strncat: %s\n", dest);
	
	ft_strncat(dest, src, nb);
	
	printf("Apres ft_strncat: %s\n", dest);

	return 0;
}
*/

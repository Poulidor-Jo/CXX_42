/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <jormoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 08:46:33 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/23 13:33:02 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		lenght;
	char	*dest;

	i = 0;
	lenght = 0;
	while (src[lenght])
		lenght++;
	dest = malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	*src = "Hello world";

	printf("Copie de ma string allouer avec malloc : %s", ft_strdup(src));
}*/

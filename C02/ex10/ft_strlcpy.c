/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:26:24 by jmoret            #+#    #+#             */
/*   Updated: 2025/07/13 22:03:56 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	src[] = "Hello Copilot!";
	char	dest[20];
	unsigned int	len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("src: %s\ndest: %s\nlen: %u\n", src, dest, len);
	return (0);
}*/


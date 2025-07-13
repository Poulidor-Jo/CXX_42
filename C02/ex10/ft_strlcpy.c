/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:26:24 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/24 14:24:45 by jmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/* #include <stdio.h>

int	main(void)
{
	char			src[] = "Hello, world!";
	char			dest[20];
	unsigned int	len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Dest: %s\n", dest);
	printf("Source len: %u\n", len);
	return (0);
} */

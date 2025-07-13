/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:01:57 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/07/13 21:58:40 by jordanmoret      ###   ########.fr       */
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

/*#include <stdio.h>
int main(void) 
{
    char src[] = "Hello Copilot";
    char dest[50];
    ft_strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("src: %s\ndest (5): %s\n", src, dest);
    return 0;
}*/

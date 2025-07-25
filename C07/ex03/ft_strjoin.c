/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:19:19 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/23 13:23:34 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i ];
		i++;
	}
	dest[i] ='\0';
	return (dest);
}


char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int	len;
	int	i;
	char	*dest;

	i = 0;
	len = 0;
	if (size == 0)
	{
		dest = malloc(char *)(sizeof(char));
		dest[0]= '\0';
	       return (dest)	
	}
	len = (ft_strlen(dest))
}

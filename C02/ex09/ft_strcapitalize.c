/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:52:41 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/14 09:23:16 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
}

char	ft_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !ft_is_alphanum(str[i - 1]))
			str[i] = ft_uppercase(str[i]);
		else
			str[i] = ft_lowercase(str[i]);
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>

int	main(void)
{
	char str[] = "salut,comment tu vas ? 42mots quarAnte-deux; cinQuante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/

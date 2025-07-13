/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:25:09 by jmoret            #+#    #+#             */
/*   Updated: 2025/07/13 21:47:56 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>  */

int	ft_is_alphanum(char c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

char	ft_uppercase(char c)
{
	return (c - (c >= 'a' && c <= 'z') * 32);
}

char	ft_lowercase(char c)
{
	return (c + (c >= 'A' && c <= 'Z') * 32);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (i == 0 || !ft_is_alphanum(str[i - 1]))
			str[i] = ft_uppercase(str[i]);
		else
			str[i] = ft_lowercase(str[i]);
		++i;
	}
	return (str);
}
/*int	main(void)
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/

/*int    ft_is_alphanum(char c)
 {
     if ((c >= '0' && c <= '9')
         || (c >= 'A' && c <= 'Z')
         || (c >= 'a' && c <= 'z'))
         return (1);
     return (0);
 }

 char    ft_uppercase(char c)
 {
     if (c >= 'a' && c <= 'z')
         return (c - 32);
     return (c);
 }

 char    ft_lowercase(char c)
 {
     if (c >= 'A' && c <= 'Z')
         return (c + 32);
     return (c);
 }

 char    *ft_strcapitalize(char *str)
 {
     int    i;

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
*/

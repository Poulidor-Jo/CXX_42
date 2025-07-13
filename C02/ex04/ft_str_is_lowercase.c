/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:02:05 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/07/13 21:59:28 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/*int main(void) {
    char s1[] = "abcdef";
    char s2[] = "abcDEF";
    printf("%s: %d\n", s1, ft_str_is_lowercase(s1));
    printf("%s: %d\n", s2, ft_str_is_lowercase(s2));
    return 0;
}*/

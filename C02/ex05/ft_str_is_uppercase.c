/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:02:07 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/07/13 22:01:22 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

/*int main(void) {
    char s1[] = "ABCDEF";
    char s2[] = "ABCdef";
    printf("%s: %d\n", s1, ft_str_is_uppercase(s1));
    printf("%s: %d\n", s2, ft_str_is_uppercase(s2));
    return 0;
}*/

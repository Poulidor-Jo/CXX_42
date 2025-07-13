/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:02:02 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/07/13 22:01:36 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9' )
			return (0);
		str++;
	}
	return (1);
}

/*int main(void) 
{
    char s1[] = "123456";
    char s2[] = "42abc";
    printf("%s: %d\n", s1, ft_str_is_numeric(s1));
    printf("%s: %d\n", s2, ft_str_is_numeric(s2));
    return 0;
}*/

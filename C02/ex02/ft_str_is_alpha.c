/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:02:00 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/07/13 21:58:33 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <='Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
			str++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void) 
{
    char s1[] = "Hello";
    char s2[] = "Hello42";
    printf("%s: %d\n", s1, ft_str_is_alpha(s1));
    printf("%s: %d\n", s2, ft_str_is_alpha(s2));
    return 0;
}*/

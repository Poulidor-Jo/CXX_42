/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 09:02:11 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/14 09:09:48 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
int main(void) 
{
    char s1[] = "ABCDEF";
    char s2[] = "ABCdef";
    printf("%s: %d\n", s1, ft_str_is_uppercase(s1));
    printf("%s: %d\n", s2, ft_str_is_uppercase(s2));
    return 0;
}*/
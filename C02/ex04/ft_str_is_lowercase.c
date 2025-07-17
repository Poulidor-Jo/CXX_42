/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 08:43:11 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/14 09:08:41 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
    char s1[] = "abcdef";
    char s2[] = "abcDEF";
    printf("%s: %d\n", s1, ft_str_is_lowercase(s1));
    printf("%s: %d\n", s2, ft_str_is_lowercase(s2));
    return 0;
}*/
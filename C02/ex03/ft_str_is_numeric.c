/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:00:28 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/14 09:06:32 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
    char s1[] = "1234569";
    char s2[] = "42abc";
    printf("%s: %d\n", s1, ft_str_is_numeric(s1));
    printf("%s: %d\n", s2, ft_str_is_numeric(s2));
    return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 09:12:04 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/14 09:10:40 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void) 
{
  char s1[] = "Hello World!";
    char s2[] = "Hello\nWorld!";
    printf("%s: %d\n", s1, ft_str_is_printable(s1));
    printf("%s: %d\n", s2, ft_str_is_printable(s2));
    return 0;
}*/

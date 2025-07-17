/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 09:35:46 by jormoret          #+#    #+#             */
/*   Updated: 2025/07/14 09:11:59 by jormoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int main(void) 
{
    char s[] = "Hello world!";
    printf("Avant : %s\n", s);
    ft_strupcase(s);
    printf("Après : %s\n", s);
    return 0;
}*/
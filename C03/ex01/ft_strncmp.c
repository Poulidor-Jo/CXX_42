/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:13:50 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/11 12:17:40 by jmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include<stdio.h>

int main()
{
	char str1[] = "hello";
	char str2[] = "helloo";

	int result = ft_strncmp(str1, str2, 4);
	printf("Resultat de la comparaison; %d\n", result);
	
	return(0);
}
*/
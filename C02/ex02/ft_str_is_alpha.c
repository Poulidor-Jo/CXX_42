/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:02:00 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/06/16 23:02:01 by jordanmoret      ###   ########.fr       */
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
//#include<stdio.h>
// int	main(void)
// {
// 	char str1[] = "HelloWorld";
// 	char str2[] = "Hello123";
// 	printf("Test 1: %s -> %d\n", str1, ft_str_is_alpha(str1));// retour 1
// 	printf("Test 2: %s -> %d\n", str2, ft_str_is_alpha(str2));// retour 0
// 	return (0);
// }

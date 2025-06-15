/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 00:21:16 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/06/13 00:21:17 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while(c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

/* int 	main(void)
{
	ft_print_numbers();
}*/


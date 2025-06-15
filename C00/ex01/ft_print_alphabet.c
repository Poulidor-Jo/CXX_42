/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:52:32 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/06/13 00:07:30 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char	c;

    c = 'a';
    while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}


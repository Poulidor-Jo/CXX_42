/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoret <jmoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:08:30 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/16 10:16:46 by jmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;

	argc = 1;
	while (argv[argc])
	{
		j = 0;
		while (argv[argc][j] != '\0')
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		write (1, "\n", 1);
		argc++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:02:10 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/07/13 21:59:36 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_printable	(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return(0);
		str++;
	}
	return(1);
}

/*int main(void) {
  char s1[] = "Hello Copilot!";
    char s2[] = "Hello\nCopilot!";
    printf("%s: %d\n", s1, ft_str_is_printable(s1));
    printf("%s: %d\n", s2, ft_str_is_printable(s2));
    return 0;
}*/

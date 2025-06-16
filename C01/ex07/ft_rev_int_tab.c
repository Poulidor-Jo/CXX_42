/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 23:21:12 by jordanmoret       #+#    #+#             */
/*   Updated: 2025/06/15 23:21:14 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int ri;
	int swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
/*#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};  // Déclaration du tableau
    int size = 5;  // Taille du tableau

    ft_rev_int_tab(tab, size);  // Appel de la fonction pour inverser le tableau

    // Affichage direct du tableau après inversion
    for (int i = 0; i < size; i++)
        printf("%d ", tab[i]);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:47:58 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/08/13 20:15:09 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    tmpswap(int    *tab, unsigned int p1, unsigned int p2)
{
    int    tmp;
    
    tmp = tab[p1];
    tab[p1] = tab[p2];
    tab[p2] = tmp;    
}

void    bubble_sort(int *tab, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    
    i = 0;
    while(i < size)
    {
        j = 0;
        while(j < size - 1)
        {  
            if(tab[j] > tab[j + 1])
                tmpswap(tab, j, j + 1);  
            j++;
        }
        i++;
    }
}

int	*sort_in_tab(int *tab, unsigned int size)
{
	if(size <= 1)
		return(tab);
	bubble_sort(tab, size);
	return(tab);
}
size_t	ft_strstack(t_stack **stack)
{
	size_t	i;
	t_stack *curent;

	i = 0;
	curent = (*stack);
	while (curent)
	{
		curent = curent->next;
		i++;
	}
	return (i);
}
void min_index(t_stack **stack, int *tab)
{
    t_stack *stackcpy;
    int *tabc;
    size_t stacklen;
    size_t i, j;

    stackcpy = (*stack);
    stacklen = ft_strstack(stack); // Obtenir la longueur de la pile
    tabc = sort_in_tab(tab, stacklen); // Trier le tableau

    i = 0;
    while (stackcpy)
    {
        j = 0;
        while (j < stacklen)
        {
            if (stackcpy->value == tabc[j])
            {
                stackcpy->index = j + 1; // Attribuer l'indice en tant que base 1
                break;
            }
            j++;
        }
        stackcpy = stackcpy->next; // Passer à l'élément suivant de la pile
        i++;
    }
}

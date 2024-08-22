/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:30:36 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/08/12 18:46:58 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stlast(t_stack *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	ft_stadd_back(t_stack **alst, t_stack *new)
{
	t_stack	*last;

	if (alst)
	{
		if (*alst)
		{
			last = ft_stlast(*alst);
			last->next = new;
		}
		else
			*alst = new;
	}
}

t_stack *ft_stnew(int content)
{
	t_stack	*elt;

	if (!(elt = malloc(sizeof(t_stack))))
		return (NULL);
	elt->value = content;
	elt->index = -1;
	elt->next = NULL;
    return (elt);
}
void	stack_init(t_stack **stack, int *tab, int ac)
{
	t_stack	*new;
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		new = ft_stnew(tab[i]);
		ft_stadd_back(stack, new);
		i++;
	}
}

void	printstack(t_stack *stack)
{
	while (stack)
	{
		printf("%d : [%d]\n",stack->index, stack->value);
		stack = stack->next;
	}
}

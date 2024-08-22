#include "push_swap.h"

int swap(t_stack **stack)
{
	t_stack *next;
 
	next = (*stack)->next;
	(*stack)->next = next->next;
	next->next = *stack;
	*stack = next;
    return (0);
}

int	sa(t_stack **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	write(1, "sa\n", 3);
	return (0);
}

int sb(t_stack **stack_b)
{
    if (swap(stack_b) == -1)
        return(-1);
    write(1, "sb\n", 3);
    return(0);
}

int ss(t_stack **stack_a, t_stack **stack_b)
{

    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
    return(0);
}
int push (t_stack **stack_from, t_stack **stack_to)
{
    t_stack *stack_f;
    t_stack *stack_tt;
    t_stack *tmp;

    stack_f = *stack_from;
    stack_tt = *stack_to;
    tmp = stack_f;
    stack_f = stack_f ->next;
    *stack_from = stack_f;
    if (!(*stack_to))
    {
        (*stack_to) = tmp;
        (*stack_to)->next = NULL;
    }
    else
    {
        tmp -> next = stack_tt;
        *stack_to = tmp;
    }
    return(0);
}

int pa(t_stack **stack_b, t_stack **stack_a)
{
    if(push(stack_b, stack_a) == -1)
        return(-1);
     write(1, "pa\n", 3);
     return(0);
}
int pb(t_stack **stack_a, t_stack **stack_b)
{
    if(push (stack_a, stack_b) == -1)
        return(-1);
     write(1, "pb\n", 3);
     return(0);
}
int rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *last;

    tmp = *stack;
    last = ft_stlast(tmp);
    *stack = tmp ->next;
    tmp -> next = NULL;
    last -> next = tmp;
	return(0);
}

int	ra(t_stack **stack_a)
{
    if(rotate(stack_a) == -1)
        return(-1);
    write(1, "ra\n", 3);
    return(0);
}

int rb(t_stack **stack_b)
{
    if(rotate(stack_b) == -1)
        return(-1);
    write(1, "rb\n", 3);
    return(0);
}

int rr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    write(1, "rr\n", 3);
    return(0);
}

int reverserotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *last;
    t_stack *secondlast;

    tmp = *stack;
    last = ft_stlast(tmp);
    while (tmp -> next -> next )
    {   
        tmp = tmp -> next;
    }
    secondlast = tmp;
    secondlast -> next = NULL;
    last -> next = *stack;
    *stack = last;
    return(0);
}

int rra(t_stack **stack_a)
{
    if(reverserotate(stack_a) == -1)
        return(-1);
    write(1, "rra\n", 4);
    return(0);
}

int rrb(t_stack **stack_b)
{
    if(reverserotate(stack_b) == -1)
        return(-1);
    write(1, "rrb\n", 4);
    return(0);
}

int rrr(t_stack **stack_a, t_stack **stack_b)
{
    reverserotate(stack_a);
    reverserotate(stack_b);
    write(1, "rrr\n", 4);
    return(0);
}
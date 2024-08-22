#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H\

#include "libft/libft.h"
#include "printf/ft_printf.h"

# include <stdlib.h>
# include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
}t_stack;

//check ac/av
int checkavac(int ac, char **av);


//struct fonction
t_stack  *ft_stlast(t_stack *lst);
t_stack *ft_stnew(int content);
void	ft_stadd_back(t_stack **alst, t_stack *new);
void	stack_init(t_stack **stack, int *tab, int ac);
void	printstack(t_stack *stack);

//instruction push_swap
int pb(t_stack **stack_a, t_stack **stack_b);
int pa(t_stack **stack_b, t_stack **stack_a);
int	ra(t_stack **stack_a);
int rb(t_stack **stack_b);
int rr(t_stack **stack_a, t_stack **stack_b);
int	sa(t_stack **stack_a);
int	sb(t_stack **stack_a);
int ss(t_stack **stack_a, t_stack **stack_b);
int rra(t_stack **stack_a);
int rrb(t_stack **stack_b);
int rrr(t_stack **stack_a, t_stack **stack_b);

//gestion index
void	min_index(t_stack **stack, int *tab);
#endif
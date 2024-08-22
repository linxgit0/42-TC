/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_par.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:24:11 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/08/13 20:19:35 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_lache(char **avs)
{
    int i;

    i = 0;
    while(avs[i])
    {
        free(avs[i]);
        i++;
    }
    free(avs);
}

static int vatoi(int num, char **av, int i)
{
    i++;
    while(av[i])
    {
            if(ft_atoi(av[i]) == num)
            return (1);
        i++;
    }
    return (0);
    
}

int check_double(int ac, int *ad)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(i < ac)
    {

            while(j < ac)
            {
                if(ad[i] == ad[j])
                    return(0);   
                i++;
            }
        j = 0;
        i++;
    }
    return (1);
}
static int vnum(char *nb)
{
    int i;

    i = 0;
    if(nb[0] == '-')
        i++;
    while(nb[i])
    {
            if(!ft_isdigit(nb[i]))
            return (0);
        i++;
    }
    return (1);
}

int checkavac(int ac, char **av)
{
    long int nb;
    char **avs;
    int i;

	 i = 0;
    if (ac == 2)
        avs = ft_split(av[1], ' ');
    else
    {
        i = 1;
        avs = av;
    }
	while (avs[i])
    {
        nb = ft_atoi(avs[i]);
        if (!vnum(avs[i]))
		{
        	write(1, "error1\n", 6);
			return (0);
		}
        if (vatoi(nb, avs, i))
		{
      		write(1, "error2\n", 6);
			return (0);
		}
        if (nb < -2147483648 || nb > 2147483647)
		{
       		write(1, "error3\n", 6);
			return (0);
		}
        i++;
    }
	if (ac == 2)
    	ft_lache(avs);
	return (1);
}

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
    int nb[ac -1];
	int	i;
	int	j;

	i = -1;
	j = 0;
	b = NULL;
	if (ac < 2)
		return (1);
	if (!(checkavac(ac, av)))
		return (0);
	while(++i < ac - 1)
		nb[i] = ft_atoi(av[i + 1]);
	stack_init(&a, nb, ac);
	min_index(&a, nb);
	printstack(a);
	rra(&a);
	printstack(a);
	//printstack(b);
	//pa(&b, &a);
	//printf("a\n");
	//printstack(a);
    //if(check_double(av, ac, nb) == 0)
        //write(1, "error\n", 6);
    return(0);
}
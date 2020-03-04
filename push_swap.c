/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 09:37:03 by alanders          #+#    #+#             */
/*   Updated: 2020/02/26 11:32:36 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	choose_sort(t_stack **a, t_stack **b, int stacklen)
{
	if (stacklen == 2)
		sort_two(a, b);
	else if (stacklen == 3)
		sort_three(a, b);
	else if (stacklen > 3 && stacklen <= 5)
		sort_five(a, b);
	else if (stacklen > 5 && stacklen <= 20)
		sort_twenty(a, b);
	else if (stacklen > 20 && stacklen <= 50)
		sort_fifty(a, b);
	else if (stacklen > 50 && stacklen <= 105)
		sort_hundred(a, b);
	else if (stacklen > 100 && stacklen <= 250)
		sort_two_fifty(a, b);
	else if (stacklen > 250 && stacklen <= 505)
		sort_five_hundred(a, b);
	else if (stacklen > 505)
		sort_large(a, b);
}

int			main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**args;

	stack_a = NULL;
	stack_b = NULL;
	args = argv;
	if (argc < 2)
		ERROR;
	if (input_valid(argc, args))
	{
		stack_a = stack_populate(argc, args);
		if (is_sorted(stack_a))
			return (0);
		choose_sort(&stack_a, &stack_b, stack_len(&stack_a));
	}
	else
		ERROR;
	return (0);
}

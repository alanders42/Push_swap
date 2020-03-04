/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:42:41 by alanders          #+#    #+#             */
/*   Updated: 2020/02/26 10:58:37 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_free(t_stack *stack)
{
	while (stack)
	{
		free(stack);
		stack = stack->next;
	}
}

void	print_stack(t_stack **stack)
{
	t_stack	*print;

	print = *stack;
	while (print != NULL)
	{
		ft_putnbr(print->value);
		ft_putchar('\n');
		print = print->next;
	}
}

int		stack_len(t_stack **stack)
{
	t_stack	*tmp;
	int		len;

	len = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}

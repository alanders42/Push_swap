/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:34:41 by alanders          #+#    #+#             */
/*   Updated: 2020/02/26 07:47:27 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*get_order(t_stack **stack)
{
	t_stack *s_tmp;
	t_stack	*tmp;
	int		*order;
	int		count;
	int		i;

	s_tmp = *stack;
	order = (int *)malloc(sizeof(int) * stack_len(stack));
	i = -1;
	while (s_tmp)
	{
		tmp = *stack;
		count = 1;
		while (tmp)
		{
			if (s_tmp->value > tmp->value)
				count++;
			tmp = tmp->next;
		}
		order[++i] = count;
		s_tmp = s_tmp->next;
	}
	return (order);
}

t_stack		*normalize(t_stack **stack)
{
	t_stack	*ret;
	int		*order;
	int		i;

	ret = NULL;
	i = stack_len(stack) - 1;
	order = get_order(stack);
	while (i >= 0)
		push(&ret, order[i--]);
	free(order);
	return (ret);
}

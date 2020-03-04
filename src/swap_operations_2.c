/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:38:39 by alanders          #+#    #+#             */
/*   Updated: 2020/02/26 10:38:43 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **b)
{
	t_stack *tmp;

	if (*b)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
	}
	else
		return ;
}

void	swap_both(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		swap(a);
		swap(b);
	}
	else
		return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:15:15 by alanders          #+#    #+#             */
/*   Updated: 2020/02/26 11:00:40 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (!*a)
		return ;
	if ((*a)->next == NULL)
		return ;
	first = *a;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	(*a) = first->next;
	first->next = NULL;
	last->next = first;
}

void	rot_both(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		rotate(a);
		rotate(b);
	}
}

void	rev_rot(t_stack **a)
{
	t_stack	*scnd_last;
	t_stack	*last;

	if (!*a)
		return ;
	if ((*a)->next == NULL)
		return ;
	scnd_last = NULL;
	last = *a;
	while (last->next != NULL)
	{
		scnd_last = last;
		last = last->next;
	}
	scnd_last->next = NULL;
	last->next = *a;
	*a = last;
}

void	rev_rot_both(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		rev_rot(a);
		rev_rot(b);
	}
}
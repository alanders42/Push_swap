/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:37:18 by alanders          #+#    #+#             */
/*   Updated: 2020/02/26 10:22:20 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to(t_stack **dst, t_stack **src)
{
	t_stack *d_curr;
	t_stack *s_curr;
	t_stack *s_next;

	if (!*src)
		return ;
	d_curr = NULL;
	s_curr = *src;
	s_next = s_curr->next;
	if (*dst)
	{
		d_curr = *dst;
		s_curr->next = d_curr;
		*dst = s_curr;
		s_curr = s_next;
		*src = s_curr;
	}
	else
		push(dst, pop(src));
}

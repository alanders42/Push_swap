/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:52:01 by alanders          #+#    #+#             */
/*   Updated: 2020/02/16 14:04:35 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_fifty(t_stack **a, t_stack **b)
{
	int r_max;
	int i;

	r_max = 0;
	i = 1;
	while (*a)
	{
		r_max += 13;
		while (i <= r_max)
		{
			if (!(*a))
				break ;
			if ((*a)->value <= r_max)
			{
				print_operation("pb", a, b);
				i++;
			}
			else
				print_operation("ra", a, b);
		}
	}
	i--;
	push_max_a(b, a, i);
}

void	sort_hundred(t_stack **a, t_stack **b)
{
	int r_max;
	int i;

	r_max = 0;
	i = 1;
	while (*a)
	{
		r_max += 15;
		while (i <= r_max)
		{
			if (!(*a))
				break ;
			if ((*a)->value <= r_max)
			{
				print_operation("pb", a, b);
				i++;
			}
			else
				print_operation("ra", a, b);
		}
	}
	i--;
	push_max_a(b, a, i);
}

void	sort_two_fifty(t_stack **a, t_stack **b)
{
	int r_max;
	int i;

	r_max = 0;
	i = 1;
	while (*a)
	{
		r_max += 30;
		while (i <= r_max)
		{
			if (!(*a))
				break ;
			if ((*a)->value <= r_max)
			{
				print_operation("pb", a, b);
				i++;
			}
			else
				print_operation("ra", a, b);
		}
	}
	i--;
	push_max_a(b, a, i);
}

void	sort_five_hundred(t_stack **a, t_stack **b)
{
	int r_max;
	int i;

	r_max = 0;
	i = 1;
	while (*a)
	{
		r_max += 44;
		while (i <= r_max)
		{
			if (!(*a))
				break ;
			if ((*a)->value <= r_max)
			{
				print_operation("pb", a, b);
				i++;
			}
			else
				print_operation("ra", a, b);
		}
	}
	i--;
	push_max_a(b, a, i);
}

void	sort_large(t_stack **a, t_stack **b)
{
	int r_max;
	int i;

	r_max = 0;
	i = 1;
	while (*a)
	{
		r_max += 50;
		while (i <= r_max)
		{
			if (!(*a))
				break ;
			if ((*a)->value <= r_max)
			{
				print_operation("pb", a, b);
				i++;
			}
			else
				print_operation("ra", a, b);
		}
	}
	i--;
	push_max_a(b, a, i);
}

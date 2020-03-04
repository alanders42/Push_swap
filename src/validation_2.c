/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:27:56 by alanders          #+#    #+#             */
/*   Updated: 2020/02/25 11:59:13 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		input_valid(int ac, char **av)
{
	if (ac == 2)
	{
		if (!input_valid_string(av))
			return (0);
	}
	else if (ac > 2)
	{
		if (!input_valid_ints(av))
			return (0);
	}
	return (1);
}

int		is_sorted(t_stack *a)
{
	int	temp;

	if (!a)
		return (0);
	while (a->next)
	{
		temp = a->value;
		a = a->next;
		if (temp > a->value && a)
			return (0);
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   taking_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:35:11 by alanders          #+#    #+#             */
/*   Updated: 2019/02/21 09:10:11 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		taking_input(t_stack **a, t_stack **b, char **line)
{
	while (get_next_line(0, line))
	{
		if (checkline(*line))
		{
			do_operation(*line, a, b);
			free(*line);
		}
		else if (!(checkline(*line)))
		{
			free(*line);
			free(*a);
			return (0);
		}
	}
	return (1);
}
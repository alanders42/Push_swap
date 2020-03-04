/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:46:43 by alanders          #+#    #+#             */
/*   Updated: 2020/02/26 07:26:26 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack *stack_b;
	char	*line;
	char	**args;

	stack_a = NULL;
	args = argv;
	stack_b = NULL;
	if (argc < 2)
		ERROR;
	if ((input_valid(argc, args)))
	{
		stack_a = stack_populate(argc, args);
		if (!taking_input(&stack_a, &stack_b, &line))
			ERROR;
	}
	else
		ERROR;
	if (is_sorted(stack_a) && !stack_b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (0);
}

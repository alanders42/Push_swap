/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:48:45 by alanders         #+#    #+#             */
/*   Updated: 2020/02/26 10:53:26 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define ERROR {ft_putstr_fd("Error\n", 2); return (0);}

typedef struct		s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

t_stack				*stack_populate(int argc, char **argv);
t_stack				*normalize(t_stack **stack);

void				push(t_stack **stack, int val);
void				print_stack(t_stack **stack);
void				stack_free(t_stack *stack);
void				swap(t_stack **b);
void				swap_both(t_stack **a, t_stack **b);
void				push_to(t_stack **dst, t_stack **src);
void				rotate(t_stack **a);
void				rot_both(t_stack **a, t_stack **b);
void				rev_rot(t_stack **a);
void				rev_rot_both(t_stack **a, t_stack **b);
void				do_operation(char *line, t_stack **a, t_stack **b);
void				print_operation(char *op, t_stack **a, t_stack **b);
void				push_min_max_b(t_stack **a, t_stack **b, int amount, int stacklen);
void				push_max_a(t_stack **b, t_stack **a, int amount);
void				sort_two(t_stack **a, t_stack **b);
void				sort_three(t_stack **a, t_stack **b);
void				sort_five(t_stack **a, t_stack **b);
void				sort_twenty(t_stack **a, t_stack **b);
void				sort_fifty(t_stack **a, t_stack **b);
void				sort_hundred(t_stack **a, t_stack **b);
void				sort_two_fifty(t_stack **a, t_stack **b);
void				sort_five_hundred(t_stack **a, t_stack **b);
void				sort_large(t_stack **a, t_stack **b);

int					pop(t_stack **stack);
int					stack_len(t_stack **stack);
int					taking_input(t_stack **a, t_stack **b, char **line);
int					checkline(char *line);
int					is_sorted(t_stack *a);
int					input_valid(int ac, char **av);
int					input_valid_string(char **av);
int					input_valid_ints(char **av);
int					find_avg(t_stack **stack);
int					find_pos(t_stack *stack, int val);
int					find_min_max(t_stack *stack, int type);
int					find_min_max_pos(t_stack *stack, int type);
int					find_last(t_stack *stack);

#endif
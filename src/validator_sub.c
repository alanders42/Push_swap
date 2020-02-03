/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:44:01 by alanders          #+#    #+#             */
/*   Updated: 2020/01/26 10:37:34 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int		dup_check(char **arr)
{
	int		i;
	int		j;

	i = 0;
	while (arr[i])
	{
		j = 1;
		while (arr[i + j] != '\0')
		{
			if (ft_strequ(arr[i], arr[i + j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int				input_valid_string(char **av)
{
	static char	**arr;
	char		*str;
	int			i;

	str = av[1];
	arr = ft_strsplit(str, ' ');
	i = 0;
	if (!ft_only_digits(str))
		return (0);
	if (!dup_check(arr))
		return (0);
	while (arr[i])
	{
		if (ft_int_over(arr[i]))
			return (0);
		i++;
	}
	return (1);
}

int				input_valid_ints(char **av)
{
	int		i;
	char	**arr;

	i = 1;
	arr = av;
	while (arr[i])
	{
		if (!ft_only_digits(arr[i]))
			return (0);
		if (ft_int_over(arr[i]))
			return (0);
		i++;
	}
	if (!dup_check(arr))
		return (0);
	return (1);
}

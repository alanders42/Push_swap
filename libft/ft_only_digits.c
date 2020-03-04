/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_digits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 11:43:52 by alanders          #+#    #+#             */
/*   Updated: 2019/08/26 10:20:40 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_only_digits(char *str)
{
	while (*str)
	{
		if (*str == '-')
			str++;
		if (!ft_isdigit(*str) && !ft_iswhitespace(*str))
			return (0);
		str++;
	}
	return (1);
}

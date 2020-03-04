/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <alanders@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:08:45 by alanders          #+#    #+#             */
/*   Updated: 2019/06/03 16:49:37 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 97 && c <= 122)
			return (c);
		else
			return (c + 32);
	}
	else
		return (c);
}

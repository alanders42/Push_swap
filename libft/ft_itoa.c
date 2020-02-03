/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:17:59 by alanders          #+#    #+#             */
/*   Updated: 2019/06/21 11:23:25 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countchars(int n)
{
	int		cnt;

	cnt = 0;
	if (n == 0)
		return (cnt);
	else if (n < 0)
	{
		cnt++;
		while (n /= 10)
			cnt++;
	}
	else
	{
		while (n /= 10)
			cnt++;
	}
	return (cnt);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	if (!(str = ft_strnew(ft_countchars(n) + 1)))
		return (NULL);
	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		str[i++] = '0';
	if (n < 0 && (n = -n))
		neg = 1;
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}

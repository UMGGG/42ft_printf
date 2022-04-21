/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:57:08 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/22 02:27:59 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_change_hexa(long long num, int i)
{
	char			*hexalist;
	char			*str;
	long long		leftnum;
	int				size;

	leftnum = ft_givenum(num, i);
	size = 0;
	hexalist = "0123456789abcdef";
	while (leftnum != 0)
	{
		leftnum = leftnum / 16;
		size++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size--] = '\0';
	leftnum = ft_givenum(num, i);
	while (size > 0)
	{
		str[size--] = hexalist[(leftnum % 16)];
		leftnum = leftnum / 16;
	}
	str[size] = hexalist[leftnum];
	return (str);
}

long long	ft_givenum(long long num, int i)
{
	unsigned int	finalnum;

	if (num < 0 && i == 1)
		finalnum = 4294967296 + num;
	else
		return (num);
	return ((long long)finalnum);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:57:08 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/20 19:02:42 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_change_hexa(int num)
{
	char			*hexalist;
	char			*str;
	unsigned int	leftnum;
	int				size;

	leftnum = ft_givenum(num);
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
	leftnum = ft_givenum(num);
	while (size > 0)
	{
		str[size--] = hexalist[(leftnum % 16)];
		leftnum = leftnum / 16;
	}
	str[size] = hexalist[leftnum];
	return (str);
}

unsigned int	ft_givenum(int num)
{
	unsigned int	finalnum;

	if (num < 0)
		finalnum = 4294967296 + num;
	else
		finalnum = num;
	return (finalnum);
}

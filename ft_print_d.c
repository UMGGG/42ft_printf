/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:43:57 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/22 01:55:09 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_d(va_list **a)
{
	int		vatemp;
	char	*str;
	ssize_t	print_size;

	print_size = 0;
	vatemp = (int)va_arg(**a, int);
	if (vatemp == 0)
		print_size = write(1, "0", 1);
	else
	{
		str = ft_itoa(vatemp);
		print_size = write(1, str, ft_strlen(str));
		free(str);
	}
	return (print_size);
}

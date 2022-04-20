/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:45:38 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/20 16:28:21 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_u(va_list **a)
{
	unsigned int	vatemp;
	char			*str;
	ssize_t			print_size;

	print_size = 0;
	vatemp = va_arg(**a, int);
	if (vatemp == 0)
		print_size = write(1, "0", 1);
	else
	{
		str = ft_ltoa(vatemp);
		if (str[0] == '-')
			print_size = write(1, &str[1], (ft_strlen(str) - 1));
		else
			print_size = write(1, str, ft_strlen(str));
		free(str);
	}
	return (print_size);
}

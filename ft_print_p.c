/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:45:25 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/22 02:28:22 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_p(va_list **a)
{
	size_t			vatemp;
	ssize_t			print_size;
	char			*str;

	print_size = 0;
	vatemp = (size_t)va_arg(**a, size_t);
	str = ft_change_hexa((long long)vatemp, 2);
	print_size = write(1, "0x", 2);
	print_size += write(1, str, ft_strlen(str));
	free(str);
	return (print_size);
}

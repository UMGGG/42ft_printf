/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:26:01 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/15 16:55:12 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_c(va_list **a)
{
	unsigned char	vatemp;
	ssize_t			print_size;

	print_size = 0;
	vatemp = va_arg(**a, int);
	print_size = write(1, &vatemp, 1);
	return (print_size);
}

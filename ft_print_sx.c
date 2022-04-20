/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:44:22 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/20 18:12:25 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_sx(va_list **a)
{
	int			vatemp;
	ssize_t		print_size;
	char		*str;

	print_size = 0;
	vatemp = va_arg(**a, int);
	str = ft_change_hexa(vatemp);
	print_size = write(1, str, ft_strlen(str));
	free(str);
	return (print_size);
}

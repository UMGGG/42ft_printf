/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:45:25 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/20 16:56:28 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_p(va_list **a)
{
	void			*vatemp;
	ssize_t			print_size;

	print_size = 0;
	vatemp = va_arg(**a, void *);
	print_size = write(1, vatemp, ft_strlen(vatemp));
	return (print_size);
}

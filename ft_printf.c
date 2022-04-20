/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:25:01 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/20 19:08:14 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	print_va(const char *str, va_list *a)
{
	ssize_t	print_size;

	print_size = 0;
	if (str[1] == 'c')
		print_size = ft_print_c(&a);
	else if (str[1] == 's')
		print_size = ft_print_s(&a);
	else if (str[1] == 'd')
		print_size = ft_print_d(&a);
	else if (str[1] == 'i')
		print_size = ft_print_i(&a);
	else if (str[1] == 'u')
		print_size = ft_print_u(&a);
	else if (str[1] == '%')
		print_size = write(1, "%%", 1);
	else if (str[1] == 'x')
		print_size = ft_print_sx(&a);
	else if (str[1] == 'X')
		print_size = ft_print_bx(&a);
	return (print_size);
}

int	ft_printf(const char *str, ...)
{
	va_list	a;
	int		i;
	ssize_t	print_size;
	ssize_t	past_print_size;

	i = 0;
	print_size = 0;
	va_start (a, str);
	while (str[i])
	{
		past_print_size = print_size;
		if (str[i] != '%')
			print_size += write(0, &str[i], 1);
		else
			print_size += print_va(&str[i++], &a);
		if (past_print_size > print_size)
		{
			print_size = -1;
			va_end(a);
			return (-1);
		}
		i++;
	}
	va_end(a);
	return ((int)print_size);
}

int	main(void)
{
	unsigned int a = 991828;
	printf("%d\n", printf("123%c1%s123%d%%%i%d %u %x %X\n", 't', "ghj", -7123332, 10, 0, a, -8849, 2218383));
	printf("%d\n", ft_printf("123%c1%s123%d%%%i%d %u %x %X\n", 't', "ghj", -7123332, 10, 0, a, -8849, 2218383));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <jaeyjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:25:19 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/04/22 18:01:47 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

long long			ft_givenum(long long num, int i);
unsigned long		ft_givenum_address(unsigned long num);
int					ft_printf(const char *str, ...);
int					ft_countnum(long n);
size_t				ft_strlen(const char *s);
ssize_t				ft_print_c(va_list **a);
ssize_t				ft_print_s(va_list **a);
ssize_t				ft_print_d(va_list **a);
ssize_t				ft_print_bx(va_list **a);
ssize_t				ft_print_sx(va_list **a);
ssize_t				ft_print_i(va_list **a);
ssize_t				ft_print_u(va_list **a);
ssize_t				ft_print_p(va_list **a);
char				*ft_itoa(int n);
char				*ft_ltoa(unsigned int n);
char				*ft_change_hexa(long long num, int i);
char				*ft_change_hexa_address(unsigned long num);

#endif

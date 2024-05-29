/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:18:42 by teddybandam       #+#    #+#             */
/*   Updated: 2024/05/29 19:20:29 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	format(char c, va_list list)
{
	int	print;

	print = 0;
	if (c == 's')
		print = ft_putstr(va_arg(list, char *));
	else if (c == 'c')
		print = ft_putchar(va_arg(list, int));
	else if (c == '%')
		print = write(1, "%", 1);
	else if (c == 'd' || c == 'i')
		print = ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		print = ft_unsigned_int_putnbr(va_arg(list, unsigned int));
	else if (c == 'p')
		print = print_ptr_hexa(va_arg(list, unsigned long));
	else if (c == 'x')
		print = ft_print_hexa_lowercase(va_arg(list, unsigned int));
	else if (c == 'X')
		print = ft_print_hexa_uppercase(va_arg(list, unsigned int));
	else
	{
		print += ft_putchar ('%');
		print += ft_putchar(c);
	}
	return (print);
}

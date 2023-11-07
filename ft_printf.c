/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:13:03 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/07 18:15:15 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	format(char c, va_list list)
{
	int	print;

	if (c == 's')
		print = ft_putstr(va_arg(list, char *));
	else if (c == 'c')
		print = ft_putchar(va_arg(list, int));
	else if (c == '%')
        	print = write(1, "%", 1); 
	else if (c == 'd' || c == 'i')
		print = ft_print_int(va_arg(list, int));
	else if (c == 'u')
        	print = ft_unsigned_putnbr(va_arg(list, unsigned int),0);
	else if (c == 'p')
 		print = print_ptr_hexa(va_arg(list, unsigned long));
 	else if (c == 'x')
		print = print_hexa_lowercase(va_arg(list, unsigned int));
 	else if (c == 'X')
 		print = print_hexa_uppercase(va_arg(list, unsigned int));
	return (print);
}


int	ft_printf(char *str, ...)
{
	va_list		list;
	int			i;
	int			print;

	va_start(list, str);
	print = 0;
	i = 0;
	
	while (str[i])
	{
		if (str[i] == '%')
		{
			print += format(str[i + 1], list);
			i++;
		}
		else
			print += write(1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (print);
}

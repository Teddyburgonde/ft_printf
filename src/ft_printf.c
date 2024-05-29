/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:13:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/05/29 19:50:42 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char *str, ...)
{
	va_list		list;
	int			i;
	int			print;

	if (!str)
		return (-1);
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

// The main function is just for testing purposes

// #include <stdio.h>

// int	main(void)
// {
// 	int i = 42;
// 	char c = 'a';
// 	float f = 3.14;
// 	double d = 3.14159;
//     char *s = "Hello, World!";

//     printf("Testing integer: \n");
//     printf("ft_printf: %d\n", ft_printf("%d\n", i));
//     printf("printf: %d\n", printf("%d\n", i));
// 	printf("\n\n\n");
//     printf("Testing character: \n");
//     printf("ft_printf: %d\n", ft_printf("%c\n", c));
//     printf("printf: %d\n", printf("%c\n", c));
// 	printf("\n\n\n");
//     printf("Testing float: \n");
//     printf("ft_printf: %d\n", ft_printf("%f\n", f));
//     printf("printf: %d\n", printf("%f\n", f));
// 	printf("\n\n\n");
//     printf("Testing double: \n");
//     printf("ft_printf: %d\n", ft_printf("%f\n", d));
//     printf("printf: %d\n", printf("%f\n", d));
// 	printf("\n\n\n");
//     printf("Testing string: \n");
//     printf("ft_printf: %d\n", ft_printf("%s\n", s));
//     printf("printf: %d\n", printf("%s\n", s));

//     return 0;
// }

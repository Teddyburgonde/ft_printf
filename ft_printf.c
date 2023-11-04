/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:50:42 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/04 16:49:28 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(char *str, ...)
{
	va_list	list;
	int		i;
	int		print;

	va_start(list, str);
	print = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == 's')
		{
			print += *(char *)ft_putstr(va_arg(list, char *));
			i++;
		}
		if (str[i] == '%' && str[i + 1] == 'd')
		{
			ft_putnbr(va_arg(list, int));
			i++;
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (print);
}

int main(void)
{
 
    //char    str[] = "salut les 55amis";
    int	a;

	a = -42;
	ft_printf("results : %d", a);
} 

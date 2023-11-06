/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:50:42 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/04 20:06:23 by tebandam         ###   ########.fr       */
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
			print += (int *)ft_putstr(va_arg(list, char *));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'd')
		{
			print += ft_strlen(ft_putnbr(va_arg(list, int)));
			i++;
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
	va_end(list);
	return (print);
}

int main(void)
{
 
    char    str[] = "salut les amis";
    int	a;
	double	b;

	a = -42;
	b = 10.4;
	ft_printf("results : %d\n", a);
	ft_printf("autre resultat : %s\n", str);
	ft_printf("%f", b);	
} 

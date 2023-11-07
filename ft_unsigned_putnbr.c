/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:12:25 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/07 17:30:32 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_recursive_putnbr(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
		len = ft_recursive_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}


int     ft_unsigned_putnbr(unsigned int nb, int negative)
{
        int     print;
	
	if (negative)
		write (1, "-", 1);
	print = ft_recursive_putnbr(nb);
        return (print);
}

int	ft_print_int(int nb)
{
	if (nb < 0)
		return (ft_unsigned_putnbr(-nb, 1));
	return (ft_unsigned_putnbr(nb, 0));
}

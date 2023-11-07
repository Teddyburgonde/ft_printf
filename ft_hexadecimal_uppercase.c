/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:07 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/07 14:34:12 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    print_hexa_uppercase(unsigned int nb)
{
	int	print_length;

	print_length = 0;
        char    uppercase[] = "0123456789ABCDEF";
        
        if (nb >= 16)
        {
                print_length = print_hexa_uppercase(nb / 16);
        }
	print_length += 1;
        write(1, &uppercase[nb % 16], 1);
	return (print_length);
}

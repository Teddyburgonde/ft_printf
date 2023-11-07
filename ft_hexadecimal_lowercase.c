/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:31:19 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/07 14:19:48 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_hexa_lowercase(unsigned int nb)
{
	int	print_length;

	print_length = 0;
	char 	lowercase[] = "0123456789abcdef";
	
	if (nb >= 16)
        {
                print_length = print_hexa_lowercase(nb / 16);
        }
	print_length += 1;
        write(1, &lowercase[nb % 16], 1);
	return (print_length);
}

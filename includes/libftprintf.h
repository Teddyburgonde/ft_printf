/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:22:21 by tebandam          #+#    #+#             */
/*   Updated: 2024/05/29 19:35:49 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>


/*
* Functions for print
*/

int             format(char c, va_list list);
int				ft_print_hexa_uppercase(unsigned int nb);
int				ft_print_hexa_lowercase(unsigned int nb);
int				print_ptr_hexa(unsigned long nb);
int				ft_unsigned_int_putnbr(unsigned int n);

/*
* Utils
*/

int				ft_putstr(char *str);
int				ft_putchar(char c);
int				ft_putnbr(int nb);

/*
* Main
*/
int				ft_printf(char *str, ...);

#endif
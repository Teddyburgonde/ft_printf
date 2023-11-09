/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:02:51 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/09 18:11:48 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

unsigned int	ft_strlen(const char *str);
char			*ft_itoa(int n);
int				ft_printf(char *str, ...);
int				ft_putstr(char *str);
int				ft_putchar(char c);
int				print_hexa_lowercase(unsigned int nb);
int				print_hexa_uppercase(unsigned int nb);
int				print_ptr_hexa(unsigned long nb);
int				ft_unsigned_int_putnbr(unsigned int n);
int				ft_putnbr(int nb);

#endif

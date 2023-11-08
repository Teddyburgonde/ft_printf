#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(char *str, ...);
int	ft_putstr(char *str);
int    ft_putchar(char c);
char 	*ft_itoa(int n);
int	print_hexa_lowercase(unsigned int nb);
int	print_hexa_uppercase(unsigned int nb);
int    print_ptr_hexa(unsigned long nb);
unsigned int	ft_strlen(const char *str);
int ft_unsigned_int_putnbr(unsigned int n);
int	ft_putnbr(int nb);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:50:42 by tebandam          #+#    #+#             */
/*   Updated: 2023/11/04 12:50:54 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

char *ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }    
    return (str);
}

int ft_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);
    int i;
    int print;

    print = 0;
    i = 0;
    while (str[i])
    {
            if (str[i] == '%' && str[i + 1] == 's')
            {
                print += *(char *)ft_putstr(va_arg(list, char *));
            }
            i++;
    }
    
    return (print);
}

int main(void)
{
 
    char    str[] = "salut les amis";
    ft_printf("%s", str);
} 

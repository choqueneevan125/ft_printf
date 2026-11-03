/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   function_printf.h                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 09:04:02 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/02 16:29:58 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_PRINTF_H
# define FUNCTION_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include "libft.h"

int		count_size_nb(int nb);
char	*str_upper(char *str);
int		printchar(char c);
int		printstr(char *str);
int		ft_strlen_int(char *str);
int		parse(const char *s, va_list *args);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_tohexa(unsigned long nb);
int		printx(unsigned int nb);
int		print_x_maj(unsigned int nb);
int		print_pointor(void *ptr);

#endif

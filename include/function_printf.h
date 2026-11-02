/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   function_printf.h                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 09:04:02 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/02 13:34:21 by evanchoq        ###   ########.fr        */
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

#endif

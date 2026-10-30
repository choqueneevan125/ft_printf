/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   function_printf.h                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 09:04:02 by evanchoq         #+#    #+#              */
/*   Updated: 2026/10/30 14:34:23 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_PRINTF_H
# define FUNCTION_PRINTF_H

# define PARAM "cspdiuxX%"

# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include "libft.h"

int		count_size_nb(int nb);
char	*str_upper(char *str);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   parse_arg.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 10:52:45 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/02 16:04:03 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"

static int	flag_nb(const char *s, va_list *args)
{
	char	*nbr;
	int		len;

	len = 0;
	if (s[0] == 'i' || s[0] == 'd')
	{
		nbr = ft_itoa(va_arg(*args, int));
		len = printstr(nbr);
		free(nbr);
		return (len);
	}
	else if (s[0] == 'u')
	{
		nbr = ft_itoa_unsigned(va_arg(*args, unsigned int));
		len = printstr(nbr);
		free(nbr);
		return (len);
	}
	return (0);
}

int	parse(const char *s, va_list *args)
{
	flag_nb(s, args);
	if (s[0] == 'c')
		return (printchar(va_arg(*args, int)));
	else if (s[0] == 's')
		return (printstr(va_arg(*args, char *)));
	else if (s[0] == '%')
		return (printchar('%'));
	else if (s[0] == 'x')
		return (printx(va_arg(*args, unsigned int)));
	else if (s[0] == 'X')
		return (print_x_maj(va_arg(*args, unsigned int)));
	return (0);
}

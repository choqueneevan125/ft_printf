/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   parse_arg.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 10:52:45 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/02 13:30:57 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"

int	parse(const char *s, va_list *args)
{
	char	*nbr;
	int		len;

	if (s[0] == 'c')
		return (printchar(va_arg(*args, int)));
	else if (s[0] == 's')
		return (printstr(va_arg(*args, char *)));
	else if (s[0] == 'i' || s[0] == 'd')
	{
		nbr = ft_itoa(va_arg(*args, int));
		len = printstr(nbr);
		free(nbr);
		return (len);
	}
	return (0);
}

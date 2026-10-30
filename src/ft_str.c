/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 09:34:50 by evanchoq         #+#    #+#              */
/*   Updated: 2026/10/30 11:02:39 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"
#include "libft.h"

char	*str_upper(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			dest[i] = str[i] - 32;
		else
			dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

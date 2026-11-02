/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   printvalue.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 11:20:42 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/02 11:46:38 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"

int	printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

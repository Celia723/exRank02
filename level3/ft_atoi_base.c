/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 20:14:02 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/10 20:48:47 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Nombre de la tarea: ft_atoi_base
Archivos esperados: ft_atoi_base.c
Funciones permitidas: Ninguna
--------------------------------------------------------------------------------

Escribe una función que convierta el argumento de cadena str (base N <= 16)
a un entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef
Estos, por supuesto, deben recortarse según la base solicitada. Por
ejemplo, la base 4 reconoce "0123" y la base 16 reconoce "0123456789abcdef".

Las letras mayúsculas también deben ser reconocidas: "12fdb3" es lo mismo que "12FDB3".

Los signos negativos ('-') se interpretan solo si son el primer carácter de la
cadena.

Tu función debe ser declarada de la siguiente manera:

int	ft_atoi_base(const char *str, int str_base); */


int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;
	int	digit;

	sign = 1;
	result = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			break ;
		if (digit >= str_base)
			break ;
		result = result * str_base + digit;
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("-aa", 16));
	return (0);
}
*/
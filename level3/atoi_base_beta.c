/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base_beta.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:51:49 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/17 12:42:34 by ceboyero         ###   ########.fr       */
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
	int i;
	int sign;
	int result;
	int digit;
	
	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' ||  str[i] == '+')
	{
			if (str[i] == '-')
				sign = -1;
			i++;
	}
	
	while (str[i])
	{
		if (str[i] >= '0' &&  str[i] <= '9')
			digit = str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else
			break;
		if (digit >= str_base)
			break;
		result = result * str_base + digit;
		i++;
	}
	return (result * sign);
}
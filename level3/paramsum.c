/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:46:03 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/17 18:21:38 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la tarea: paramsum
Archivos esperados: paramsum.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que muestre el número de argumentos pasados a él, seguido de
una nueva línea.

Si no hay argumentos, simplemente muestra un 0 seguido de una nueva línea.

Ejemplo:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$> */


#include <unistd.h>

//pasar los digitos del numero a char
void parasum(int n)
{
	char digit;
	
	if (n >= 10)
	{
		parasum(n/10);
		parasum(n % 10);
	}
		
	else
	{
		digit = n - '0';
		write(1, &digit, 1);	
	}
	
}

int main(int argc, char const *argv[])
{
	if (argc == 1)
		return ('\n');
	
		parasum(argc);
	return 0;
}


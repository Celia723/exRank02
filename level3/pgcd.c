/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:44:40 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/14 12:54:34 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la tarea: pgcd
Archivos esperados: pgcd.c
Funciones permitidas: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Escribe un programa que tome dos cadenas representando dos enteros estrictamente positivos
que quepan en un int.

Muestra su máximo común divisor seguido de una nueva línea (siempre es un
entero estrictamente positivo).

Si el número de parámetros no es 2, muestra una nueva línea.

Ejemplos:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
 */

 #include <unistd.h>
 #include <stdlib.h>
 #include <stdio.h>
 
 int pgcd(int a, int b)
 {
	int tmp;

	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}

	return (a);
	
 }

 int main(int argv, char *argc[])
 {
	int n1;
	int n2;
	int result;
	
	if (argv != 3)
		return (write(1, "\n", 1), 0);
	
	n1 = atoi(argc[1]);
	n2 = atoi(argc[2]);
	printf("%d\n", pgcd(n1, n2));
	
	return (0);
 }
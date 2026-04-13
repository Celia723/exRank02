/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:44:40 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/13 19:19:18 by ceboyero         ###   ########.fr       */
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
 
 int pgcd(int n1, int n2)
 {
	int	result1;
	int result2;
	int i;
	int *divs1;
	int *divs2;

	result1 = n1;
	result2 = n2;
	i  = 0;
	//sacamos os divisores de n1
	while (result1 != 1)
	{
		if (result1 / 2)
		{
			result1 = result1 / 2;
			divs1[i] = 2;			
		}
		else if (result1 / 3)
		{
			result1 = result1 / 3;
			divs1[i] = 3;
			
		}
			
		else if (result1 / 7)
		{
			result1 = result1 / 7;
			divs1[i] = 7;	
		}
		i++;
			
	}
	
		i  = 0;
	//sacamos os divisores de n2
	while (result2 != 1)
	{
		if (result2 / 2)
		{
			result2 = result1 / 2;
			divs2[i] = 2;			
		}
		else if (result2 / 3)
		{
			result1 = result2 / 3;
			divs2[i] = 3;
			
		}
			
		else if (result2 / 7)
		{
			result1 = result2 / 7;
			divs2[i] = 7;	
		}
		i++;
			
	}
	
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
	result = pgcd (n1, n2);

 }
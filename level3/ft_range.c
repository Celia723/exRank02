/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:14:22 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/21 11:17:45 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* Nombre de la tarea: ft_range
Archivos esperados: ft_range.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escribe la siguiente función:

int     *ft_range(int start, int end);

Debe asignar memoria (con malloc()) para un array de enteros, llenarlo con valores consecutivos
que comiencen en start y terminen en end (¡Incluyendo start y end!), luego
devolver un puntero al primer valor del array.

Ejemplos:

- Con (1, 3) devolverás un array que contenga 1, 2 y 3.
- Con (-1, 2) devolverás un array que contenga -1, 0, 1 y 2.
- Con (0, 0) devolverás un array que contenga 0.
- Con (0, -3) devolverás un array que contenga 0, -1, -2 y -3. */


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int *ft_range(int start, int end)
{
    int *arr;
    int i;
    int j;
	long size;

    j = 0;
    if (start < end)
    {
		size = (long)end - (long)start + 1;
        arr = malloc(sizeof(int) * size);
        if (!arr)
            return (0);
        i = start;
        while (i <= end)
            arr[j++] = i++;
    }
    else
    {
		size = (long)start - (long)end + 1;
        arr = malloc(sizeof(int) * size);
        if (!arr)
            return (0);
        i = start;
        while (i >= end)
            arr[j++] = i--;
    }
    return (arr);
}

int main(int argc, char const *argv[])
{
	int s1  = 4;
	int s2 = 7;
	int *arr;
	int i;

	i = 0;
	arr = ft_range(s1, s2);
	
	while (i < 4)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
	return 0;
}

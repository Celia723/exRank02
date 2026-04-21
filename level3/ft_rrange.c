/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:52:40 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/21 11:09:24 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la asignación: ft_rrange
Archivos esperados: ft_rrange.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escribe la siguiente función:

int     *ft_rrange(int start, int end);

Debe asignar (con malloc()) un array de enteros, llenarlo con valores consecutivos
que comienzan en end y terminan en start (¡Incluyendo start y end!), luego
devolver un puntero al primer valor del array.

Ejemplos:

- Con (1, 3) devolverás un array que contiene 3, 2 y 1.
- Con (-1, 2) devolverás un array que contiene 2, 1, 0 y -1.
- Con (0, 0) devolverás un array que contiene 0.
- Con (0, -3) devolverás un array que contiene -3, -2, -1 y 0.
 */
#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int     *arr;
    int     i;
    long    len;

    i = 0;
    if (start < end)
    {
        len = (long)end - start + 1;
        arr = malloc(sizeof(int) * len);
        if (!arr)
            return (0);
        while (i < len)
            arr[i++] = end--;
    }
    else
    {
        len = (long)start - end + 1;
        arr = malloc(sizeof(int) * len);
        if (!arr)
            return (0);
        while (i < len)
            arr[i++] = end++;
    }
    return (arr);
}


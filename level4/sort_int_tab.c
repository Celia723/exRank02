/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:45:18 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/17 18:54:24 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la tarea: sort_int_tab
Archivos esperados: sort_int_tab.c
Funciones permitidas:
--------------------------------------------------------------------------------

Escribe la siguiente función:

void sort_int_tab(int *tab, unsigned int size);

Debe ordenar (en su lugar) el array de enteros 'tab', que contiene exactamente 'size'
elementos, en orden ascendente.

Los números dobles deben ser preservados.

La entrada siempre es coherente. */

void sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int j;
	int tmp;
	i = 0;
	j = 0;
	
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	
}
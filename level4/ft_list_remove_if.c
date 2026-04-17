/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:39:54 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/14 15:08:08 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la tarea: ft_list_remove_if
Archivos esperados: ft_list_remove_if.c
Funciones permitidas: free
--------------------------------------------------------------------------------

Escribe una función llamada ft_list_remove_if que elimine de la lista
pasada cualquier elemento cuyos datos sean "iguales" a los datos de referencia.

Se declarará de la siguiente manera:

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp toma dos void* y devuelve 0 cuando ambos parámetros son iguales.

Debes usar el archivo ft_list.h, que contendrá:

$>cat ft_list.h

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
 */


 #include "./level3/ft_list.h"
 
 #include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	// Si la lista está vacía o llegamos al final (EN ES ORDEN)
	if (!begin_list || !*begin_list)
		return ;
	t_list *copy = *begin_list;
	if (cmp(copy->data, data_ref) == 0) // == 0
	{
		// Saltamos el nodo:
		//el puntero del anterior ahora apunta al siguiente del actual
		*begin_list = copy->next;////importante el astriscooooo
		free(copy);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}else // Pasamos la DIRECCIÓN del puntero next
		  // paso copy ya q se desplaza el puntero
		ft_list_remove_if(&copy->next, data_ref, cmp);
}

	
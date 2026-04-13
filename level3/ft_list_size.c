/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:41:41 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/13 13:06:48 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Nombre de la tarea: ft_list_size
Archivos esperados: ft_list_size.c, ft_list.h
Funciones permitidas: Ninguna
--------------------------------------------------------------------------------

Escribe una función que devuelva el número de elementos en la lista enlazada que se le
pasa como argumento.

Debe ser declarada de la siguiente manera:

int	ft_list_size(t_list *begin_list);

Debes utilizar la siguiente estructura y entregarla como un archivo llamado
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list; */


#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;

	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:27:02 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/09 16:34:27 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la asignación: swap_bits
Archivos esperados: swap_bits.c
Funciones permitidas: ninguna
--------------------------------------------------------------------------------

Escribe una función que tome un byte, intercambie sus mitades (como en el ejemplo) y
devuelva el resultado.

Tu función debe ser declarada de la siguiente manera:

unsigned char swap_bits(unsigned char octet);

Ejemplo:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 010 */

 
 unsigned char swap_bits(unsigned char octet)
 {
	return (octet >> 4 || octet << 4);
	
 }
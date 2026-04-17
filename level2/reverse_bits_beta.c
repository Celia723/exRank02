/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits_beta.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:22:52 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/14 11:38:19 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la asignación: reverse_bits
Archivos esperados: reverse_bits.c
Funciones permitidas: ninguna
--------------------------------------------------------------------------------

Escribe una función que tome un byte, lo invierta bit por bit (como en el
ejemplo) y devuelva el resultado.

Tu función debe ser declarada de la siguiente manera:

unsigned char reverse_bits(unsigned char octet);

Ejemplo:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
 */
#include <unistd.h>  // Para usar write()

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result;
	int i = 8;
	
	while (i--)
	{
		result |= ((octet >> i) & 1) << (7 - i);
	}

	return (result);
	
}
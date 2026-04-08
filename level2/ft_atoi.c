/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:41:07 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/08 16:34:58 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str); */ 

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int signo;
	int result;
	
	result = 0;
	signo = 1;
	 i = 0;
	//espacios
	 while (str[i] == ' ' || (str[i] >=  9 &&  str[i] <= 13))
		i++;
	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			result *= -1;
		i++;	
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= signo;
	
	return (result);
}


int main(int argc, char const *argv[])
{
	char	*num;
	int r;
	

	num = "      -123a";
	printf("str: %s\n", num);
	r  = ft_atoi(num);
	printf("%d\n", r);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:54:04 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 11:44:46 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main (void)
{
	char prueba[90] = "Hola Mundoooo";
	ft_memset(prueba , 'a' , 6);

	int x = 0;
	while (prueba[x] != '\0')
	{
		write(1,&prueba[x],1);
		x ++;
	}
	
}
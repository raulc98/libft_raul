/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:48:57 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/06 17:31:03 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	s1 -> el primer string a comparar
	s2 -> el segundo string a comparar
	n −> Número maximo de caracteres a comparar.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	else
		return (-s2[i]);
}
//TODO: BORRAR O COMENTAR
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	original;
	//int	mio;
	original = strncmp("Pepew", "Pepee", 5);
	printf("%i", original);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:48:57 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/01 21:00:25 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	s1 -> el primer string a comparar
	s2 -> el segundo string a comparar
	n −> Número maximo de caracteres a comparar.
*/

int				ft_strncmp(char *s1, char *s2, size_t n)
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
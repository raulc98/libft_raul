/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:04:50 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/02 22:38:14 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[10];
	int i = 0;
	while (i < 10)
	{
		str[i] = '\0';
		i ++;
	}
	//MEMMOVE ORIGINAL
	memmove(str, "Hola mundo que tal", 5);
	printf("Memmove normal: %s",str);
	printf("\n");
	char	prueba[10];
	i = 0;
	while (i < 10)
	{
		prueba[i] = '\0';
		i ++;
	}
	ft_memmove(prueba, "Hola mundo que tal", 5);
	printf("Memmove Mio: %s",prueba);
	printf("\n");
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:30:20 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/01 20:19:07 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size < len_dst)
		len_src += size;
	else
		len_src += len_dst;
	i = 0;
	while (src[i] != '\0' && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[10] = "Hola";
	char	str2[10] = "Hola";
	size_t uno;
	size_t dos;
	uno = strlcat(str,"Que tall",8);
	dos = ft_strlcat(str2,"Que tall",8);
	printf("Prueba 1: %s" , str);
	printf("\n");
	printf("Prueba 2: %s" , str2);
	return (0);
}
*/
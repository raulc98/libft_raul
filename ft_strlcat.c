/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:30:20 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/27 21:24:13 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	x;

	length = 0;
	while (dst[length] != '\0')
		length ++;
	x = 0;
	while (length != size)
	{
		if (x != size)
			dst[length] = src[x];
		else
			dst[length] = '\0';
		length ++;
		x ++;
	}
}

//TODO_ FALTA PROBAR
// int main(void)
// {
// 	//size_t
// 	char dst[10] = "Hola que";
// 	char src[10] = "ADIOS TO";
// 	size_t resultado = 0;
// 	resultado = strlcpy(dst,src, 10);

// 	int x = 0;
// 	while (x < 10)
// 	{
// 		write(1,&dst[x],1);
// 		x ++;
// 	}

// 	char dst1[10] = "Hola que";
// 	char src1[10] = "ADIOS TO";
// 	write(1,"--",2);
// 	resultado = strlcat(dst1,src1, 10);
// 	x = 0;
// 	while (x < 10)
// 	{
// 		write(1,&dst1[x],1);
// 		x ++;
// 	}
// 	return (0);
// }

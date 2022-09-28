/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:20:56 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/27 21:17:09 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	result;

	aux = (unsigned char *)str;
	result = (unsigned char *)c;
	i = 0;
	while (i < n)
	{
		if (aux == result)
		{
			return (aux);
		}
		aux ++;
		i ++;
	}
	return (NULL);
}

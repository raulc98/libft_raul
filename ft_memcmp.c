/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:12:57 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/15 12:34:01 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	character1 = (unsigned char *)str1;
	unsigned char	character2 = (unsigned char *)str1;
	size_t 			i;

	i = 0;
	if (n == 0)
		return (0);
	while (i <= n)
	{
		if (character1 != character2)
			return (character1 - character1);
		character1 ++;
		character2 ++;
		i ++;
	}
	return (0);
}
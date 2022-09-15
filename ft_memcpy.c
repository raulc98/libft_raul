/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:16:45 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 15:35:13 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
	size_t x;

	x = 0;
	while (x <= n)
	{
		((unsigned char*)dest)[x] = ((unsigned char*)src)[x];
		x ++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:16:45 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/01 14:00:40 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (!dest && !src)
		return (0);
	x = 0;
	while (x < n)
	{
		((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		x ++;
	}
	return (dest);
}

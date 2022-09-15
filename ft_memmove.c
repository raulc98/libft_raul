/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:04:50 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 13:08:42 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t x;
	char aux[n];

	x = 0;
	while (x <= n)
	{
		((unsigned char*) aux)[x] = ((unsigned char*) str2)[x];
		x ++;
	}
	x = 0;
	while (x <= n)
	{
		((unsigned char*) str1)[x] = ((unsigned char*) aux)[x];
		x ++;
	}
}

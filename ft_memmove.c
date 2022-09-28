/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:04:50 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/27 21:23:31 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	x;
	char	aux[n];

	x = 0;
	while (x <= n)
	{
		((unsigned char *) aux)[x] = ((unsigned char *) str2)[x];
		x ++;
	}
	x = 0;
	while (x <= n)
	{
		((unsigned char *) str1)[x] = ((unsigned char *) aux)[x];
		x ++;
	}
}

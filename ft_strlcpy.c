/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:16:29 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/27 20:58:52 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	count;

	count = 0;
	while (src[count] != '\0')
	{
		count ++;
	}
	x = 0;
	while (src[x] == '\0' && x < (size - 1))
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (count);
}

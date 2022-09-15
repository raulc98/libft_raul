/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:16:29 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 13:29:56 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strlcpy ( char * dest , const char * src , size_t size )
{
	size_t	x;
	size_t	count;

	count  = 0;
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
	return(count);	
}
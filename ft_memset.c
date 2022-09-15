/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:05:37 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 13:54:11 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memset(char *str, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x <= n)
	{
		//Castear de void a char
		((unsigned char*)str)[x] = (unsigned char)c;
		x ++;
	}
	return (str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:05:37 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/27 21:19:03 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(char *str, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x <= n)
	{
		((unsigned char *)str)[x] = (unsigned char)c;
		x++;
	}
	return (str);
}

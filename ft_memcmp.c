/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:12:57 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/28 19:11:37 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TODO: Borrar comentarios...
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*character1;
	const unsigned char	*character2;
	size_t			i;

	character1 = (unsigned char *)str1;
	character2 = (unsigned char *)str2;
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

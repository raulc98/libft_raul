/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:17:43 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 17:17:02 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == c)
		{
			return(str[x]);
		}
	}
	return ('\0');
}

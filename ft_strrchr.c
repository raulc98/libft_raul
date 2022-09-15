/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:18:14 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 17:20:23 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *str, int c)
{
	int x;

	while (str[x] != '\0')
		x ++;
	while (x != 0)
	{
		if (str[x] == c)
			return(str[x]);
		x --;
	}
	return (0);	
}
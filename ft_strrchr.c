/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:18:14 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/27 21:16:30 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	int	x;

	while (str[x] != '\0')
		x ++;
	while (x != 0)
	{
		if (str[x] == c)
			return (str[x]);
		x --;
	}
	return (0);
}

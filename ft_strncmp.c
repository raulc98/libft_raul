/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:48:57 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/27 21:19:33 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *str1, const char *str2, size_t n)
{
	int	str1_length;
	int	str2_length;

	str1_length = ft_strlen(str1);
	str2_length = ft_strlen(str2);
	if (str1_length > str2_length)
		return (1);
	else if (str1_length > str2_length)
		return (0);
	else
		return (0);
}

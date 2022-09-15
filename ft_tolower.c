/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:17:02 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/14 16:17:22 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int tolower(int caracter)
{
	if (caracter >= 65 || caracter <= 90)
		return(caracter + 32);
	return (caracter);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:53:17 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/01 20:25:50 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int caracter)
{
	if ((caracter >= 97 && caracter <= 122))
		return (caracter - 32);
	else
		return (caracter);
}

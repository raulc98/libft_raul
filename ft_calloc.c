/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:29:46 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/15 17:37:43 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
	//inicializamos el array con el tamaño
	void *c;
	c = malloc(nitems * size);
	if (nitems == NULL)
		return (0);
	
	ft_bzero(c, size * nitems);
	return (c);
}
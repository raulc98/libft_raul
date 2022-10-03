/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:29:46 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/03 11:01:40 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*tmp;

	if ((nitems * size < nitems) && (nitems * size < size))
		return (0);
    tmp = malloc((long long unsigned int) nitems * size);
    if (!tmp)
		return (NULL);
    ft_memset(tmp, '\0', nitems * size);
    return (tmp);
}

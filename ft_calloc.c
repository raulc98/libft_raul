/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:29:46 by rcabrero          #+#    #+#             */
/*   Updated: 2022/10/03 11:40:38 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t len)
{
	void	*tmp;

	if ((nitems * len < nitems) && (nitems * len < len))
		return (0);
	tmp = malloc((long long unsigned int)nitems * len);
	if (!tmp)
		return (NULL);
	ft_memset (tmp, '\0', nitems * len);
	return (tmp);
}

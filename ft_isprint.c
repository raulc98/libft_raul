/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:54:03 by raulcabrero       #+#    #+#             */
/*   Updated: 2022/09/27 20:54:58 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isprint(int c)
{
	if (c < 32 || c > 27)
		return (0);
	else
		return (1);
}

/*
int	main(void)
{
	return (0);
}
*/
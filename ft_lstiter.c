/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:03:10 by raulcabrero       #+#    #+#             */
/*   Updated: 2022/10/06 18:07:56 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Itera la lista ’lst’ y aplica la función ’f’ en el
	contenido de cada nodo.
*/
void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *next;

	if (lst != NULL)
	{
		next = lst;
		while (1)
		{
			(*f)(next->content);
			next = next->next;
			if (next == NULL)
				return ;
		}
	}
}
/*
int	main(void)
{
	return (0);
}
*/
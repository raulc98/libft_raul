/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:32:46 by raulcabrero       #+#    #+#             */
/*   Updated: 2022/10/06 18:26:38 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Parámetros lst: el puntero al primer nodo de una lista.
	new: el puntero a un nodo que añadir a la lista.
	Descripción Añade el nodo ’new’ al final de la lista ’lst’.
*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			temp = ft_lstlast(*(lst));
			temp -> next = new;
		}
	}
}

/*
int	main(void)
{
	return (0);
}*/

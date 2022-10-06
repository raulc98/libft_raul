/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:47:47 by raulcabrero       #+#    #+#             */
/*   Updated: 2022/10/06 11:31:40 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
lst: la dirección de un puntero al primer nodo de
una lista.
new: un puntero al nodo que añadir al principio de
la lista.
*/

//Añade el nodo ’new’ al principio de la lista ’lst’.
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	**lst;
	t_list	*new;

	lst = malloc(sizeof(t_list));
	lst[0] = ft_lstnew("Hola");
	new = ft_lstnew("pepe");
	ft_lstadd_front(lst,new);
	printf("\nprueba : %s",(char *)lst[0]->content);
	printf("\nNEXT : %s",(char *)lst[0]->next->content);
	return (0);
}
*/
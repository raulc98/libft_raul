/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:46:22 by raulcabrero       #+#    #+#             */
/*   Updated: 2022/10/06 11:05:18 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//BONUS
t_list	*ft_lstnew(void *content)
{
	t_list	*x;

	x = malloc(sizeof(t_list));
	if (!x)
		return (NULL);
	x->content = content;
	x->next = NULL;
	return (x);
}

/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit";
	t_list	*elem;

	elem = ft_lstnew((void *)str);
	//Parsear y tal........
	printf("\nname : %s",(char *)elem->content);
	return (0);
}
*/
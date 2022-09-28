/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:19:32 by raulcabrero       #+#    #+#             */
/*   Updated: 2022/09/27 21:05:41 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, s);
		i++;
	}
}

//Función a la que llamamos desde ft_striteri
/*
void    fn_striteri_aux(unsigned int i, char *s)
{
    write(1,&s[i],1);
}

int    main(void)
{
    ft_striteri("Hola Mundo",fn_striteri_aux);
    return (0);
}
*/

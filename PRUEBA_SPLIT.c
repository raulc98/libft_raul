/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PRUEBA_SPLIT.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulcabrerorouco <raulcabrerorouco@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:08:35 by raulcabrero       #+#    #+#             */
/*   Updated: 2022/10/03 19:30:58 by raulcabrero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	palabras(char const *s,int c)
{
	
	int	count;
	size_t	i;

	i = 0;
	count = 0;
	//mientras que i sea menor que s
	while (i < ft_strlen(s))
	{
		if(s[i] == c)
		{
			while (s[i] == c)
				i ++;
			if(s[i + 1] != c && s[i + 1] != '\0')
			{
				printf("UNA PALABRA \n");
				count ++;
			}
		}
		i++;
	}
	if (count > 0)
	{
		count --;
	}
	return(count);
}

char		**ft_split(char const *s, char c)
{
	//valor a retornar.
	char	**str;
	//reserva memoria para char
	str = (char **)malloc(palabras(s,c) * sizeof(char *));
	if (!str)
		return (0);
	return (str);
}

int	main(void)
{
	ft_split(" jj ddd   ", ' ');
	return (0);
}
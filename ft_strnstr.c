/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:34:36 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/15 13:40:47 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_strnstr(const char	*str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	z;
	char	*dest;
	
	i = 0;
	while (i <= len)
	{
		if (str1[i] == str2[i])
		{
			dest[0] = (char *) str1[i];
			z = 1;
			while (z <= len - i)
			{
				if (str1[i] == str2[i])
					dest[z] = (char *) str1[i];
				i ++;
				z ++;
			}
			return (dest);
		}
		i ++;
	}
	return (0);
}
//TODO: REVISAR
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	c;
// 	size_t	n_len;
// 	char	*hay;

// 	i = 0;
// 	hay = (char *)haystack;
// 	n_len = ft_strlen(needle);
// 	if (n_len == 0 || haystack == needle)
// 		return (hay);
// 	while (hay[i] != '\0' && i < len)
// 	{
// 		c = 0;
// 		while (hay[i + c] != '\0' && needle[c] != '\0'
// 				&& hay[i + c] == needle[c] && i + c < len)
// 			c++;
// 		if (c == n_len)
// 			return (hay + i);
// 		i++;
// 	}
// 	return (0);
// }
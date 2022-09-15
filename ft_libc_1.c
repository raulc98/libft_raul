/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libc_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:03:41 by rcabrero          #+#    #+#             */
/*   Updated: 2022/09/13 17:42:58 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int isalpha(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);
	else
		return (1);
}

int isdigit(int c)
{
	if(c < 48 || c > 57)
		return(0);
	else
		return(1);		
}

int isalnum(int c)
{
	if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return(1);
	else
		return(0);
}

int isascii(int c)
{
	if (c < 0 ||  c > 255)
		return(0);
	else
		return(1);	
}

int isprint(int c)
{
	if (c < 32 || c > 27)
		return(0);
	else
		return(1);
}
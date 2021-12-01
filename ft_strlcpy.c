/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:45:40 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/05 20:39:37 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	size_t		s;
	size_t		i;

	s = 0;
	i = 0;
	while (src[i])
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (src[s] && s < size - 1)
	{
		dst[s] = src[s];
		s++;
	}
	dst[s] = '\0';
	return (i);
}

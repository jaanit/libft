/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:40:06 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/08 16:10:01 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cpy;
	unsigned char	*str;

	if (!dst && !src)
		return (NULL);
	i = 0;
	cpy = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (i < n)
	{
		cpy[i] = str[i];
		i++;
	}
	return (dst);
}

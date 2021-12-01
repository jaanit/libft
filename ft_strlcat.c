/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:37:36 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/12 21:47:02 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		cp;

	k = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	cp = i;
	if (i >= l)
		return (j + l);
	while (src[k] && cp < l - 1)
		dst[cp++] = src[k++];
	dst[cp] = '\0';
	return (i + j);
}

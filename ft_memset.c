/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:57:25 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/18 16:31:19 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*tab;

	i = 0;
	tab = (unsigned char *)str;
	while (i < len)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

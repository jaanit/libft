/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:17:43 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/15 21:26:22 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_strnstr(const char *str, const char *ch1, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (ch1[j] == '\0' )
		return ((char *)(str));
	while (str[i])
	{
		j = 0;
		while (ch1[j] && ch1[j] == str[i + j] && (i + j) < n)
		{
			if (ch1[j + 1] == '\0')
				return ((char *) &str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:38:54 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/15 19:51:28 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_first(char const *src, char const *set, size_t j)
{
	size_t		i;

	i = 0;
	while (src[j] && set[i])
	{
		if (src[j] == set[i])
		{
			i = 0;
			j++;
		}
		else
			i++;
	}
	return (j);
}

static size_t	ft_last(char const *src, char const *set, size_t j)
{
	size_t		i;

	i = 0;
	while (set[i])
	{
		if (src[j - 1] == set[i])
		{
			i = 0;
			j--;
		}
		else
			i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		last;
	size_t		first;
	char		*ptr;
	size_t		i;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	first = ft_first(s1, set, 0);
	last = ft_last(s1, set, len);
	if (first == len)
		return (ft_strdup(""));
	ptr = (char *) malloc(sizeof(char) * (last - first + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[first] && first < last)
	{
		ptr[i] = s1[first];
		i++;
		first++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:37:21 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/08 12:28:40 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	ft_atoi(const char *s)
{
	int		i;
	long	result;
	int		n;
	char	*str;

	n = 1;
	i = 0;
	result = 0;
	str = (char *)s;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		n = (n * -1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10);
		result = result + str[i] - 48;
		i++;
	}
	return ((int)result * n);
}

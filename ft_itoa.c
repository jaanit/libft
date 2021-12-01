/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:01:29 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/15 21:24:52 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	len_num(long int n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n >= 0 && n <= 9)
		return (len);
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	nb;
	int			len;
	int			sign;

	len = len_num(n);
	nb = n;
	sign = 1;
	if (nb < 0)
	{
		nb = -nb;
		sign = -1;
	}
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (--len >= 0)
	{
		ptr[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (sign < 0)
		ptr[0] = '-';
	return (ptr);
}

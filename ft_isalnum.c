/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:48:11 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/07 10:54:15 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	ft_isalnum( int str )
{
	if ((str >= 48 && str <= 57)
		|| (str >= 65 && str <= 90)
		|| (str >= 97 && str <= 122))
	{
		return (1);
	}
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 03:46:23 by alemore           #+#    #+#             */
/*   Updated: 2017/08/08 11:24:11 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	val;

	val = 1;
	if (nb < 400)
		while (nb > val)
		{
			if (nb == val * val)
				return (val);
			val++;
		}
	else
		while (nb / 20 > val)
		{
			if (nb == val * val)
				return (val);
			val++;
		}
	return (0);
}

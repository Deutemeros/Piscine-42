/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 05:21:44 by alemore           #+#    #+#             */
/*   Updated: 2017/08/09 18:54:59 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_is_prime(int nb)
{
	int	val;

	val = nb - 1;
	while (nb % val != 0 && val > 1)
		val--;
	if (val == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

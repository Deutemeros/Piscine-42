/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 01:18:55 by alemore           #+#    #+#             */
/*   Updated: 2017/08/09 21:25:03 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	f;

	f = 0;
	if (nb > 1 && nb < 13)
	{
		nb--;
		f = ft_recursive_factorial(nb);
		nb = (nb + 1) * f;
	}
	else if (nb == 1)
		f = 1;
	else if (nb == 0)
		return (1);
	else
	{
		return (0);
	}
	return (nb);
}

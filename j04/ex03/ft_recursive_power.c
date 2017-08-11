/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 02:58:46 by alemore           #+#    #+#             */
/*   Updated: 2017/08/10 01:25:42 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if
	if (power > 1)
	{
		power--;
		nb = nb * ft_recursive_power(nb, power);
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}

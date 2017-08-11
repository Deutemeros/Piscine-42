/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 01:25:34 by alemore           #+#    #+#             */
/*   Updated: 2017/08/10 01:25:38 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;

	if (power > 1)
		c = 1;
	else if (power == 0)
		return (1);
	else
		return (0);
	if (nb == 1)
		return (1);
	while (nb && power)
	{
		c = c * nb;
		power--;
	}
	return (c);
}

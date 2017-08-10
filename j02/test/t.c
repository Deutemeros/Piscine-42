/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 08:47:14 by alemore           #+#    #+#             */
/*   Updated: 2017/08/04 07:58:48 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <math.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(void)
{
	char	d;
	char	y;

	y = '5';
	ft_putchar(d);
	ft_putchar(y);
}

int		main(void)
{
	ft_putnbr();
	return (0);
}

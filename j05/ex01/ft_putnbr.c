/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:35:13 by alemore           #+#    #+#             */
/*   Updated: 2017/08/11 23:44:53 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int		ft_pow(int a, int b)
{
	int	c;

	if (b >= 0)
		c = 1;
	else
		c = 0;
	while (a && b)
	{
		c = c * a;
		b--;
	}
	return (c);
}

int		ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		return (n);
	}
	else
		return (n);
}

void	ft_min(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putnbr(147483648);
}

void	ft_putnbr(int nb)
{
	int p;
	int t;
	int a;

	if (nb == -2147483648)
		ft_min();
	else
	{
		nb = ft_is_negative(nb);
		t = nb;
		p = 0;
		while (t > 1)
		{
			t = t / 10;
			if (t >= 1)
				p++;
		}
		while (p >= 0)
		{
			a = nb / ft_pow(10, p);
			nb = nb - (a * ft_pow(10, p));
			p--;
			ft_putchar(a + '0');
		}
	}
}

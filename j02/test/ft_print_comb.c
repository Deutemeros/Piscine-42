/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 08:47:14 by alemore           #+#    #+#             */
/*   Updated: 2017/08/03 22:11:47 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_mid(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				ft_putchar(num[0]);
				ft_putchar(num[1]);
				ft_putchar(num[2]);
				if (num[0] != '7' || num[1] != '8' || num[2] != '9')
				{
					ft_mid();
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_comb();
	return (0);
}

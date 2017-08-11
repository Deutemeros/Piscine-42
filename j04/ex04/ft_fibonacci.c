/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 03:18:57 by alemore           #+#    #+#             */
/*   Updated: 2017/08/07 21:50:37 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	fib = 0;
	if (index > 1)
	{
		index--;
		fib = ft_fibonacci(index) + ft_fibonacci(index - 1);
	}
	else if (index == 0)
		fib = 0;
	else if (index == 1)
	{
		index--;
		fib = 1;
	}
	else if (index < 0)
		return (-1);
	return (fib);
}

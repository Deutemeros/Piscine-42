/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_cool.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:22:17 by alemore           #+#    #+#             */
/*   Updated: 2017/08/13 00:38:03 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_cool(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc != 10)
		return (0);
	while (j < argc)
	{
		while (argv[j][i] != '\0')
			i++;
		j++;
		if (i != 8)
			return (0);
		i = 0;
	}
	if (j != 9)
		return (0);
	else
		return (1);
}

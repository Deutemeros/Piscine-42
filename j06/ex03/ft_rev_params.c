/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:18:01 by alemore           #+#    #+#             */
/*   Updated: 2017/08/09 14:34:27 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argv, char **argc)
{
	int	i;

	i = argv - 1;
	while (i > 0)
	{
		ft_putstr(argc[i]);
		if (argv == 0)
			return (0);
		if (i != argv)
			ft_putstr("\n");
		i--;
	}
	return (0);
}

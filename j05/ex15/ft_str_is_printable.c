/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:17:46 by alemore           #+#    #+#             */
/*   Updated: 2017/08/08 17:19:24 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	if (i == 0)
		return (1);
	while (i >= 0)
	{
		if (!(str[i] >= 33 && str[i] <= 126))
			return (0);
		i--;
	}
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:23:54 by alemore           #+#    #+#             */
/*   Updated: 2017/08/11 23:54:42 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	while (str[l] != '\0')
		l++;
	while (l >= i)
	{
		if ((str[i] >= 'A' && str[i] <= 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z' &&
					!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				str[i++] += 'A' - 'a';
			while (str[i] >= 'A' && str[i] <= 'z')
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 'a' - 'A';
				i++;
			}
		}
		i++;
	}
	return (str);
}

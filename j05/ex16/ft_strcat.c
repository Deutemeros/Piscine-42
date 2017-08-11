/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:21:00 by alemore           #+#    #+#             */
/*   Updated: 2017/08/11 23:55:07 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;
	int	max;

	i = 0;
	l = 0;
	max = 0;
	while (src[max] != '\0')
		max++;
	while (dest[l] != '\0')
		l++;
	while (i < max)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	return (dest);
}

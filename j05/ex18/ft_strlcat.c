/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:49:53 by alemore           #+#    #+#             */
/*   Updated: 2017/08/08 23:25:07 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	int	dsize;
	int	ssize;
	int	j;
	int	i;
	int	k;

	dsize = 0;
	ssize = 0;
	j = 0;
	k = 0;
	while (src[ssize] != '\0')
		ssize++;
	while (dest[dsize] != '\0')
		dsize++;
	i = dsize;
	if (dsize > nb)
		dsize = nb;
	j = nb - dsize;
	while (j > 0)
	{
		dest[i] = src[k];
		i++;
		j--;
	}
	return (ssize + dsize);
}

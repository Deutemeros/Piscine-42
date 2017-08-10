/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:53:42 by alemore           #+#    #+#             */
/*   Updated: 2017/08/09 22:22:19 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*str;

	i=0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(i);
	l = i;
	i = 0;
	while (i < l)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

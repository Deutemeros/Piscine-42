/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 01:20:11 by alemore           #+#    #+#             */
/*   Updated: 2017/08/10 02:30:43 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		*range = NULL;
	else
	{
		*range = (int*)malloc(max - min);
		while(min < max)
		{
			*range[i] = min;
			min++;
			i++;
		}
		free(*range);
	}
	return (*range);
}

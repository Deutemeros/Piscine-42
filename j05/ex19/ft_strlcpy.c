/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 23:55:39 by alemore           #+#    #+#             */
/*   Updated: 2017/08/11 23:58:29 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int nb)
{
	int	dest_length;
	int	src_length;
	int	i;

	i = 0;
	dest_length = 0;
	src_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	while (i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	return (src_length);
}

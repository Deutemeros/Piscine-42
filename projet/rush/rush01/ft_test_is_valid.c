/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_is_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 01:23:12 by alemore           #+#    #+#             */
/*   Updated: 2017/08/13 01:23:14 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_is_cool(int argc, char **argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_line_abs(int nb, int **grille, int x);
int		ft_coll_abs(int nb, int **grille, int y);
int		ft_bloc_abs(int nb, int **grille, int x, int y);
int		ft_abs(int nb, int **grile, int x, int y);
int		ft_define_gride(char **argv, int x, int y);

int		ft_define_gride(char **argv, int x, int y)
{
	int	temp;

	if (argv[x + 1][y] == '.')
		temp = 0;
	else
	{
		temp = atoi(&argv[x + 1][y]) - atoi(&argv[x + 1][y + 1]);
		while (temp % 10 == 0)
			temp /= 10;
	}
	return (temp);
}

int		**ft_grille(int argc, char **argv)
{
	int	**grille;
	int	y;
	int	x;

	grille = (int**)malloc((9 + 1) * 9);
	y = 0;
	x = 0;
	if (ft_is_cool(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (x < 9)
	{
		while (y < 9)
		{
			grille[x][y] = ft_define_gride(argv, x, y);
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
	}
	return (grille);
}

int		ft_line_abs(int nb, int **grille, int x)
{
	int	y;

	y = 0;
	while (y < 9)
	{
		if (grille[x][y] == nb)
			return (0);
		y++;
	}
	return (1);
}

int		ft_coll_abs(int nb, int **grille, int y)
{
	int	x;

	x = 0;
	while (x < 9)
	{
		if (grille[x][y] == nb)
			return (0);
		x++;
	}
	return (1);
}

int		ft_bloc_abs(int nb, int **grille, int x, int y)
{
	int	i;
	int	j;

	i = (x % 3) * 3;
	j = (y % 3) * 3;
	while (x % 3 >= i > x % 3 + 3)
	{
		while (y % 3 >= j > y % 3 + 3)
		{
			if (grille[i][j] == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_abs(int nb, int **grille, int x, int y)
{
	if (ft_bloc_abs(nb, grille, x, y) && ft_coll_abs(nb, grille, y)
			&& ft_line_abs(nb, grille, x))
		return (1);
	else
		return (0);
}

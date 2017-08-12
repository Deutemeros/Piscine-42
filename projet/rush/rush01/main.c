/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:29:25 by alemore           #+#    #+#             */
/*   Updated: 2017/08/13 01:07:31 by alemore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_cool(int argc, char **argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_grille(int argc, char **argv);
int		ft_line_abs(int nb, int **grille, int x);
int		ft_coll_abs(int nb, int **grille, int y);
int		ft_bloc_abs(int nb, int **grille, int x, int y);
int		ft_abs(int nb, int **grille, int x, int y);
int		ft_define_gride(char **argv, int x, int y);

int	i	main(int argc, char **argv)
{
	int	**grille;
	if (ft_is_cool(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	grille = ft_grille(argc, argv);
	//afficher le tableau
	//free(grille) <=== IMPORTANT!!!
}

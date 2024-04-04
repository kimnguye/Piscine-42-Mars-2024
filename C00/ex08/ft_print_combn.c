/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:34:21 by kimnguye          #+#    #+#             */
/*   Updated: 2024/04/04 10:47:36 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_print(int n, char *s)
{	
	write (1, s, n);
	write (1, ", ", 2);
}

//find a possible number for k regarding the k-1 other numbers
char	ft_valid_nb(int n, char nb[10])
{
	int	i;
	int	nine;

	nine = 0;
	i = n - 1;
	while (nb[i] == '9' - n + 1 + i && i > 0)
	{
		i--;
		nine++;
	}
	nb[i] = nb[i] + 1;
	i++;
	while (i < n)
	{
		if (nine)
			nb[i] = nb[i - 1] + 1;
		else
			nb[i] = nb[i] + 1;
		i++;
	}
	if (nb[0] == '9' - n + 1 && nb[n - 1] == '9')
		return (0);
	return (1);
}

void	ft_init(char s[10], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = i + '0';
		i++;
	}
	s[i] = '\0';
}

void	ft_print_combn(int n)
{
	char	nb[10];
	int		i;

	i = 0;
	ft_init(nb, n);
	if (n <= 0 || n >= 10)
		return ;
	ft_print(n, nb);
	while (ft_valid_nb(n, nb))
		ft_print(n, nb);
	write (1, nb, n);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2 && av[1])
		ft_print_combn(atoi(av[1]));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:54:39 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/27 15:22:46 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = min - 1;
	tab = (int *) malloc((max - min) * sizeof (int));
	if (tab == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (++i < max)
		tab[i - min] = i;
	return (tab);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	*t;
	int	i;

	if (ac == 3)
	{
		i = atoi(av[1]);
		t = ft_range(i, atoi(av[2])); 
		while (++i - 1 < atoi(av[2]))
			printf("%i ",t[i - atoi(av[1]) - 1]);
		printf("\n");
		free (t);
	}
	return(0);
}*/

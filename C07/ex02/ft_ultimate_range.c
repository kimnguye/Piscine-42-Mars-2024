/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:25:14 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/29 10:52:26 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = min - 1;
	range[0] = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	if (range[0] == NULL)
		return (-1);
	while (++i < max)
		range[0][i - min] = i;
	return (max - min);
}

/*
int	main(int ac, char **av)
{
	int	*range[100];
	int	i;

	if (ac == 3)
	{
		i = atoi(av[1]);
		ft_ultimate_range(range, atoi(av[1]), atoi(av[2]));	
		while (i < atoi(av[2]))
		{
			printf("%i", range[0][i - atoi(av[1])]);
			i++;
		}
		printf("\n");
	}
	free(range[0]);
	return (0);
}*/

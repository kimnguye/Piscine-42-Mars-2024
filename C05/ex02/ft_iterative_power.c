/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:21:35 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/25 10:36:33 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = nb;
	i = 2;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s ^ %s = %i",av[1], av[2],
			ft_iterative_power(atoi(av[1]),atoi(av[2])));
}*/

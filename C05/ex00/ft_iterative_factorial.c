/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:17:09 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/25 09:36:50 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (++i < nb)
		res = res * (i + 1);
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main (int ac, char ** av)
{
	if (ac == 2)
		printf("%s!= %i",av[1],ft_iterative_factorial(atoi(av[1])));
}*/

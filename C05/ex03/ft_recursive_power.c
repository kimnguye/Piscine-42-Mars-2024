/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:37:17 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/25 11:12:15 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		res = nb * ft_recursive_power (nb, power - 1);
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char** av)
{
	if (ac == 3)
		printf("%s^%s = %i",av[1], av[2], 
ft_recursive_power(atoi(av[1]), atoi(av[2])));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:37:29 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/25 13:52:05 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char ** av)
{
	if (ac == 2)
		printf("%s! = %i",av[1], ft_recursive_factorial(atoi(av[1])));
}*/

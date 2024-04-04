/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:03:14 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/21 10:12:21 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(int ac, char** av)
{
	ac = ac + 1;
	printf("Original function returns: %lu\n",strlen(av[1]));
	printf("Created function returns: %i\n",ft_strlen(av[1]));
	
}*/

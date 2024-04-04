/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:13:28 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/21 11:20:38 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	c;

	argc = argc + 1;
	c = '\n';
	ft_putstr(argv[1]);
	write(1, &c, 1);
	puts(argv[1]);
	return (0);
}*/

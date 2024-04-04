/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:26:13 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/22 14:34:24 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		write(1, argv[argc], ft_len(argv[argc]));
		write(1, "\n", 1);
	}
	return (0);
}

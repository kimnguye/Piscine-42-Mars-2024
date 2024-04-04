/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:02:45 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/14 12:09:51 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		start;
	int		nb;
	int		i;
	char	letter;

	start = 97;
	nb = 26;
	i = nb + start - 1;
	while (i >= start)
	{
		letter = (char)i;
		write(1, &letter, 1);
		i--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/

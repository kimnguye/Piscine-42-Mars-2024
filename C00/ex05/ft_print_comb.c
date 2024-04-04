/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:36:20 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/14 13:45:38 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int a, int b, int c)
{
	char	number [5];

	if (a != ':' && b != ':' && c != ':')
	{
		number [0] = a + '0';
		number [1] = b + '0';
		number [2] = c + '0';
		number [3] = ',';
		number [4] = ' ';
		if (a == 7 && b == 8 && c == 9)
		{
			write(1, &number, 3);
		}
		else
		{
			write(1, &number, 5);
		}
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{	
			c = b + 1;
			while (c <= 9)
			{
				ft_print_number(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

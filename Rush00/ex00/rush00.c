/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:33:40 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/16 18:24:50 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('o');
	while (i < x - 1)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('o');
	while (i < x - 1)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	inter_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('|');
	while (i < x - 1)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	if (x <= 0 || y <= 0)
	{
		write (1, "x and y must be positive numbers\n", 42);
	}
	else
	{
		first_line(x);
		if (y > 1)
		{	
			if (y > 2)
			{
				j = 2;
				while (j < y)
				{
					inter_line(x);
					j++;
				}
			}
			last_line(x);
		}
	}
}

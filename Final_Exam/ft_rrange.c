/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:24:03 by kimnguye          #+#    #+#             */
/*   Updated: 2024/04/04 18:47:25 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_tab(int start, int end)
{
	if (start - end < 0)
		return (end - start + 1);
	else
		return (start - end + 1);	
}

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	n;

	n = size_tab(start, end);
	i = 0;
	tab = malloc (sizeof(int) * n);
	if (tab == NULL)
		return (NULL);
	if (start - end < 0)
	{
		while (i < n)
		{
			tab[i] = end - i;
			i++;
		}
		return (tab);
	}
	while (i < n)
	{
		tab[i] = end + i;
		i++;
	}
	return (tab);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	int	*tab;
	int	n;
	int	i;

	i = 0;
	if (ac != 3)
		return (1);
	n = size_tab(atoi(av[1]),atoi(av[2]));
	tab = ft_rrange(atoi(av[1]),atoi(av[2]));
	if (tab == NULL)
		return (1);
	while (i < n)
		printf("%i ",tab[i++]);
	return (0);
}

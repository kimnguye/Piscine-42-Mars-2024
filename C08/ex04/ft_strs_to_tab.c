/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:27:10 by kimnguye          #+#    #+#             */
/*   Updated: 2024/04/03 17:50:10 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_dup(char *s)
{
	char	*dup;
	int		i;
	int		n;

	i = -1;
	n = ft_len(s);
	dup = malloc(n * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	while (++i < n)
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = malloc (sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_dup(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

/*#include <stdio.h>
int	main(int ac, char **av)
{
	t_stock_str	*tab;
	int		i;

	tab = ft_strs_to_tab(ac, av);
	i = 0;
	while (tab[i].str)
	{
		printf("%s | ", tab[i].str);
		printf("%d | ", tab[i].size);
		printf("%s\n", tab[i].copy);
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}*/

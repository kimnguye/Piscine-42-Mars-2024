/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:35:10 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/25 18:56:23 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *s)
{
	int	i;	

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i1;
	int		i2;
	char	*str;

	i1 = 0;
	i2 = 0;
	while (++i1 < argc - 1)
	{
		i2 = i1 + 1;
		while (i2 < argc && ft_strcmp(argv[i1], argv[i2]) <= 0)
			i2++;
		if (i2 < argc)
		{
			str = argv[i1];
			argv[i1] = argv [i2];
			argv[i2] = str;
			i1--;
		}
	}
	i1 = 0;
	while (++i1 < argc)
		ft_putstr(argv[i1]);
	return (0);
}

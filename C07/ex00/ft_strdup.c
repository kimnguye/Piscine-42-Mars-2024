/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:33:21 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/27 15:24:09 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = "\0";
	dup = (char *) malloc(ft_len(src) + 1);
	if (dup == NULL)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*s;

	s = "\0";
	s = ft_strdup(av[1]);
	if (ac == 2)
		printf("original:%s \nduplicate:%s\n", av[1], s);
	free(s);
	return (0);
}*/

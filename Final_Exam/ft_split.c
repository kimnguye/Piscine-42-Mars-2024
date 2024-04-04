/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:08:58 by kimnguye          #+#    #+#             */
/*   Updated: 2024/04/04 20:30:41 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_words(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;	
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i])
			n++;
		while (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
			i++;
	}
	return (n);
}

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] < 9 || s[i] > 13) && s[i] != 32)
		i++;
	return (i); 
}

char	*ft_dup(char *d, char *s)
{
	int	i;

	i = 0;
	while (i < len(s))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	**ft_split(char *str)
{
	int		i;
	int		n;
	char	**s;
	int		j;

	j = 0;
	i = 0;
	n = count_words(str);
	s = malloc(sizeof(char *) * (n + 1));
	if (s == NULL)
		return (NULL);
	*s = "\0";
	while (str[j])
	{
		while ((str[j] >= 9 && str[j] <= 13) || str[j] == 32)
			j++;
		if (str[j])
		{
			s[i] = malloc(len(&str[j]) + 1);
			if (s[i] == NULL)
				return (NULL);	
			s[i] = ft_dup(s[i], &str[j]);
			i++;
		}
		j = j + len(&str[j]);
	}
	s[i] = NULL;
	return (s);
}

int	main(int ac, char **av)
{
	char	**s;
	int	i;

	(void)ac;
	s = ft_split(av[1]);
	i = 0;
	while (s[i] != NULL)
	{
		printf("%s\n", s[i]);
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

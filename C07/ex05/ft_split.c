/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:11:28 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/31 18:01:08 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
int		belong(char c, char *str);
char	**ft_alloc(char *str, char *charset);
int		w_len(char *str, char *charset);
char	*ft_fill(char *s, char *str, char *charset);

int	belong(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (c == str[i])
			return (1);
	return (0);
}

int	w_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !belong(str[i], charset))
		i++;
	return (i);
}

char	**ft_alloc(char *str, char *charset)
{
	char	**s;
	int		wcount;
	int		i;

	i = 0;
	wcount = 0;
	while (str[i])
	{
		while (str[i] && belong(str[i], charset))
			i++;
		if (str[i] && !belong(str[i], charset))
		{
			wcount++;
			while (str[i] && !belong(str[i], charset))
				i++;
		}
	}
	s = malloc (sizeof(char *) * (wcount + 1));
	if (s == NULL)
		return (NULL);
	s[wcount] = 0;
	return (s);
}

char	*ft_fill(char *s, char *str, char *charset)
{
	int	j;

	j = 0;
	while (j < w_len(str, charset))
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

char	**ft_split(char *str, char *charset)
{
	char	**s;
	int		i;
	int		w;

	w = 0;
	i = 0;
	s = ft_alloc(str, charset);
	if (s == NULL)
		return (NULL);
	while (str[i])
	{
		while (belong(str[i], charset))
			i++;
		if (!str[i])
			return (s);
		s[w] = malloc((w_len(&str[i], charset) + 1) * sizeof (char));
		if (!s[w])
			return (NULL);
		s[w] = ft_fill(&s[w][0], &str[i], charset);
		i += w_len(&str[i], charset);
		w++;
	}
	return (s);
}
/*
int	main(int ac, char **av)
{
	char	**res;
	int		i;
	int		n;

	i = 0;
	res = 0;
	if (ac == 3)
	{
		res = ft_split(av[1], av[2]);
		while (res[i] != 0)
		{
			printf("%s\n", res[i]);
			i++;
		}
		n = 0;
		while (n <= i)
		{
			free(res[n]);
			n++;
		}
	free(res);
	}
	i = 0;	
	res = ft_split("**COUCOU+CA-VA/? ","*+-/ ");
		while (res[i] != 0)
		{
			printf("%s\n", res[i]);
			i++;
		}
		n = 0;
		while (n <= i)
		{
			free(res[n]);
			n++;
		}
	free(res);
}*/

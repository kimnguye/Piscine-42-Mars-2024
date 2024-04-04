/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/29 10:13:20 by kimnguye	       #+#    #+#	      */
/*   Updated: 2024/03/31 19:55:35 by kimnguye         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_join(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	n;

	i = -1;
	n = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			res[n] = strs[i][j];
			n++;
		}
		j = -1;
		while (sep[++j] && i < size - 1)
		{
			res[n] = sep[j];
			n++;
		}
	}
	res[n] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		n;
	char	*res;

	i = -1;
	n = 0;
	if (size == 0)
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		res = "\0";
		return (res);
	}
	while (++i < size)
		n += ft_len(strs[i]);
	n += ft_len(sep) * (size - 1) + 1;
	res = malloc(n * sizeof(char));
	if (res == NULL)
		return (NULL);
	*res = '\0';
	return (ft_join(size, strs, sep, res));
}

int	main(int ac, char **av)
{
	char	*jointure;

	jointure = ft_strjoin(ac - 2, &av[1], av[ac - 1]);
	printf("%s\n", jointure);
	free(jointure);
	return (0);
}

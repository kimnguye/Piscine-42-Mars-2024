/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:52:33 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/31 13:52:37 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_nbr_base(long nbr, char *base, char *res);
int		size_nbr(long nbr, int len_base);

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	is_in(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	sign;
	int	nb;

	nb = 0;
	sign = 0;
	len = checkbase(base);
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (is_in(*str, base) != -1)
	{
		nb = nb * len + is_in(*str, base);
		str++;
	}
	if (sign % 2 && nb != 0)
		return (-nb);
	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*res;
	int		len_to;

	len_to = checkbase(base_to);
	if (checkbase(base_from) < 2 || len_to < 2)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	res = malloc(size_nbr(nb, len_to) + 1);
	if (res == NULL)
		return (NULL);
	res = ft_nbr_base(nb, base_to, res);
	return (res);
}
/*
int	main(int ac, char **av)
{
	char	*s;
	if (ac == 4)
	{
		s = ft_convert_base(av[1], av[2], av[3]);
		printf("%s\n", s);
		free(s);
	}
	return (0);
}*/

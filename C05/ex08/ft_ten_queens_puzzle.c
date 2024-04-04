/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:19:20 by kimnguye          #+#    #+#             */
/*   Updated: 2024/04/02 13:10:42 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_print(int *t)
{
	int		i;
	char	s[11];

	i = 0;
	while (i < 10)
	{
		if (t[i] >= 0 && t[i] <= 9)
			s[i] = t[i] + '0';
		else
			s[i] = t[i];
		i++;
	}
	s[i] = '\0';
	write(1, s, 10);
	write(1, "\n", 1);
}

//if ft == 1: qval, else: init
int	qval(int *t, int k, int ft)
{
	int	pos;
	int	i;

	pos = 0;
	if (ft == 1)
	{
		while (pos < 10 && t[pos] != 'x')
			pos++;
		return (pos);
	}
	i = 0;
	while (i < k)
	{
		t[i] = i;
		i++;
	}
	while (i < 10)
	{
		t[i] = 'x';
		i++;
	}
	return (0);
}

//find the position for the n-th queen
char	ft_queen(int n, int k, int *res)
{
	int	i;
	int	forbid[10];

	qval(forbid, k, 0);
	i = 0;
	while (i < n && k < 10)
	{
		forbid[res[i]] = res[i];
		if (0 <= (res[i] + n - i) && (res[i] + n - i) < 10)
			forbid[res[i] + n - i] = res[i] + n - i;
		if (0 <= (res[i] - n + i) && (res[i] - n + i) < 10)
			forbid[res[i] - n + i] = (res[i] - n + i);
		i++;
	}
	if (k < qval(forbid, 0, 1))
		k = qval(forbid, 0, 1);
	if (qval(forbid, 0, 1) == 10 || k == 10)
		return ('x');
	return (k);
}

//find a solution & return 1 when all solutions were found
int	ft_solution(int *n, int *dame_zero, int *res)
{
	int	k;

	while (*n < 10)
	{
		if (*n == 0)
		{
			if (*dame_zero == 10)
				return (1);
			res[0] = (*dame_zero)++;
			(*n)++;
		}
		if (res[*n] != 'x')
			k = res[*n] + 1;
		else
			k = 0;
		res[*n] = ft_queen(*n, k, res);
		if (res[*n] != 'x')
			(*n)++;
		else
			(*n)--;
	}
	return (0);
}

//find all the solutions for the 10 queens
int	ft_ten_queens_puzzle(void)
{
	int	res[10];
	int	n;
	int	nb;
	int	dame_zero;

	res [0] = 'x';
	qval(res, 0, 0);
	n = 0;
	nb = 0;
	dame_zero = 0;
	while (dame_zero < 11)
	{
		if (ft_solution(&n, &dame_zero, res) == 1)
			return (nb);
		nb++;
		ft_print(res);
		res[n - 1] = 'x';
		n -= 2;
	}
	return (nb - 1);
}
/*
int	main(void)
{
	printf("%i \n", ft_ten_queens_puzzle());
	return (0);
}*/

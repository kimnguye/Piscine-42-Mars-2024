/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/21 18:59:38 by kimnguye	       #+#    #+#	      */
/*   Updated: 2024/03/21 19:56:38 by kimnguye         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	white_space(char c)
{	
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_signe(int n)
{
	if (n % 2 != 0)
		return (-1);
	return (1);
}

int	tenpow(int i)
{
	int	n;

	n = 10;
	if (i == 0)
		return (1);
	else if (i == 1)
		return (10);
	while (i > 1)
	{
		n = n * 10;
		i--;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	signe;
	int	nombre;
	int	i;

	i = 0;
	signe = 0;
	nombre = 0;
	while (*str && white_space(*str))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			signe++;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
		str++;
	str --;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		nombre = nombre + (*str - '0') * tenpow(i);
		i++;
		str--;
	}
	return (ft_signe(signe) * nombre);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_atoi
		("35458"));
	printf("%i\n", ft_atoi
		("\t  -+-+-+35458"));
	printf("%i\n", ft_atoi
		("---+--+1234ab567"));
	printf("%i\n", ft_atoi
	("-2147483648"));
	return (0);
}*/

/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/22 09:34:56 by kimnguye	       #+#    #+#	      */
/*   Updated: 2024/03/22 11:28:26 by kimnguye         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	i = 0;
	while (str[i])
	{
		j = i ;
		while (str[++j])
			if (str[j] == str[i])
				return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		n;
	long	nb;

	nb = nbr;
	n = check_base(base);
	if (n < 2)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > n - 1)
		ft_putnbr_base(nb / n, base);
	write (1, &base[nb % n], 1);
}

/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if(argc == 3)
	{
		ft_putnbr_base(-2147483648, "0123456789");
		write(1, "\n", 1);
		ft_putnbr_base(2147483647, "0123456789");		
		write(1, "\n", 1);
		ft_putnbr_base(100, "01");		
		write(1, "\n", 1);
		ft_putnbr_base(15, "0123456789abcdef");		
		write(1, "\n", 1);
		ft_putnbr_base(atoi(argv[1]), argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}*/

/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/22 09:34:56 by kimnguye	       #+#    #+#	      */
/*   Updated: 2024/03/31 13:53:34 by kimnguye         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	checkbase(char *base);

int	size_nbr(long nbr, int len_base)
{
	int	i;
	int	sign;

	sign = 0;
	i = 0;
	if (nbr < 0)
	{
		sign++;
		nbr = -nbr;
	}
	while (nbr >= len_base)
	{
		nbr = nbr / len_base;
		i++;
	}
	i++;
	return (i + sign);
}

int	ft_pow(long nb, int p)
{
	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	if (p > 0)
		nb = nb * ft_pow(nb, p - 1);
	return (nb);
}

char	*ft_nbr_base(long nb, char *base, char *res)
{
	int	n;
	int	len;
	int	i;
	int	neg;

	len = checkbase(base);
	n = size_nbr(nb, len);
	i = 0;
	neg = 0;
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
		i++;
		neg = 1;
	}
	while (i - neg < n - neg)
	{
		res[i] = base[nb / ft_pow(len, n - 1 - i)];
		nb = nb % ft_pow(len, n - 1 - i);
		i++;
	}
	res[i] = '\0';
	return (res);
}

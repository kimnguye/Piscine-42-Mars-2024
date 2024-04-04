#include <stdio.h>
#include <stdlib.h>

int	size_nbr(long nb)
{
	int	size;

	size = 1;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	if (nb > 9)
		size += size_nbr(nb / 10);
	return (size);
}

int	tenpow(int p)
{
	int	nb;

	nb = 1;
	if (p > 0)
		nb = 10 * tenpow(p - 1);
	return (nb);
}

char	*ft_itoa(int nb)
{
	char	*nbr;
	int		size;
	int		i;
	long	lnb;

	lnb = nb;
	i = 0;
	size = size_nbr(lnb);
	nbr = malloc (sizeof(char) * (size + 1));
	if (nbr == NULL)
		return (NULL);
	if (nb < 0)
	{
		lnb = -lnb;
		nbr[0] = '-';
		i++;
	}
	while (i < size)
	{
		nbr[i] = (lnb / tenpow(size - 1 - i)) + '0';
		lnb = lnb % tenpow(size - 1 - i);
		i++;
	}
	nbr[i] = '\0';
	return (nbr);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_itoa(atoi(av[1])));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char	*str)
{
	int	nb;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nb);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("atoi: %i\n", atoi(av[1]));
		printf("ft_atoi: %i\n", ft_atoi(av[1]));
	}
	return (0);
}

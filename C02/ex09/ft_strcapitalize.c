/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:42:14 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/19 09:54:47 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 1;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	while (str[i])
	{
		if (is_alphanum(str[i - 1]) == 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "$alut, coMMent tu vas ? 42mots qu@rante-d3ux; cinquante+et+un";

	printf("%s devient: \n", str1);
	printf("%s\n", ft_strcapitalize(str1));
	printf("\n%s devient: \n", str2);
	printf("%s\n", ft_strcapitalize(str2));
	return (0);
}*/

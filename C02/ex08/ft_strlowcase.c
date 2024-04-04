/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:35:59 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/18 18:41:35 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "salut tout le MONDE !";
	char	str2[] = "COMMENT CA VA ?";
	char	str3[] = "On est bien @ 42 non ?!";
	
	printf("%s\n",str1);
	printf("%s \n \n", ft_strlowcase(str1));
	printf("%s\n",str2);
	printf("%s \n \n", ft_strlowcase(str2));
	printf("%s\n",str3);
	printf("%s \n \n", ft_strlowcase(str3));
	return (0);
}*/

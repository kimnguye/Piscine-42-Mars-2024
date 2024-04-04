/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:31:07 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/18 17:49:46 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "abcdefghijklmnopqrstuvwxyz";
	char	str2[] = "h3llo";
	char	str3[] = "helLo";
	char	str4[] = "";

	printf("%s donne : %i \n", str4, ft_str_is_lowercase(str4));
	printf("%s donne : %i \n", str1, ft_str_is_lowercase(str1));
	printf("%s donne : %i \n", str2, ft_str_is_lowercase(str2));
	printf("%s donne : %i \n", str3, ft_str_is_lowercase(str3));
	return (0);
}
*/

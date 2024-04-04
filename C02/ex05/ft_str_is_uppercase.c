/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:54:47 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/18 18:04:47 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char    str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char    str2[] = "ABCDEfgHIJKLMNOPQRSTUVWXYZ";
	char    str3[] = "ABCD3FGHIJKLMNOQRSTUVWXYZ";
	char    str4[] = "";

	printf("%s donne : %i \n", str1, ft_str_is_uppercase(str1));
	printf("%s donne : %i \n", str2, ft_str_is_uppercase(str2));
	printf("%s donne : %i \n", str3, ft_str_is_uppercase(str3));
	printf("%s donne : %i \n", str4, ft_str_is_uppercase(str4));
	return (0);
}
*/

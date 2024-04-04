/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:06:45 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/18 18:21:47 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "coucou \n je contiens un retour a la ligne";
	char	str2[] = "coucou \t horizontal tab";
	char	str3[] = "coucou ~ tilde";
	char	str4[] = "coucou ok";

	printf("%s donne : %i \n", str1, ft_str_is_printable(str1));
	printf("%s donne : %i \n", str2, ft_str_is_printable(str2));
	printf("%s donne : %i \n", str3, ft_str_is_printable(str3));
	printf("%s donne : %i \n", str4, ft_str_is_printable(str4));
	return (0);
}*/

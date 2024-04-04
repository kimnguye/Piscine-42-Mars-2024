/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:10:10 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/18 17:28:35 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	str1[] = "0123456789";
	char	str2[] = "";
	char	str3[] = "12345c";
	char	str4[] = "123e555";

	printf("%s donne : %i \n", str1, ft_str_is_numeric(str1));
	printf("%s donne : %i \n", str2, ft_str_is_numeric(str2));
	printf("%s donne : %i \n", str3, ft_str_is_numeric(str3));
	printf("%s donne : %i \n", str4, ft_str_is_numeric(str4));
}
*/

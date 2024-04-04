/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:12:38 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/18 17:08:16 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_alpha_lc(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	ft_is_alpha_uc(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_alpha_lc(str[i]) + ft_is_alpha_uc(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

/*
int	main(void)
{
	char	str1[] = "Coucou1";
	char	str2[] = "Cou2cou";
	char	str3[] = "COUcou";
	printf("%s renvoie : %i \n", str1, ft_str_is_alpha(str1));
        printf("%s renvoie : %i \n", str2, ft_str_is_alpha(str2));
	printf("%s renvoie : %i \n", str3, ft_str_is_alpha(str3));
}
*/

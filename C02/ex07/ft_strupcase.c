/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:22:35 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/18 18:34:20 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "salut tout le MONDE !";
	char	str2[] = "Comment CA va ?";
	char	str3[] = "On est bien @ 42 non ?!";

	printf("%s\n",str1);
       	printf("%s \n \n", ft_strupcase(str1));
	printf("%s\n",str2);
       	printf("%s \n \n", ft_strupcase(str2));
	printf("%s\n",str3);
       	printf("%s \n \n", ft_strupcase(str3));
	return (0);
}*/

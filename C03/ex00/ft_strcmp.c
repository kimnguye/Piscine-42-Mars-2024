/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:25:48 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/20 10:09:31 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}	
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abcd";
	char	str3[] = "ABC";
	char	str4[] = "cba";
	
	printf("should return 0: %i\n", ft_strcmp(str1, str1));
	printf("should return neg value: %i\n", ft_strcmp(str1, str4));
	printf("should return neg value: %i\n", ft_strcmp(str1, str2));
	printf("should return pos value: %i\n", ft_strcmp(str1, str3));	
	printf("vraie fonction should return 0: %i\n", strcmp(str1, str1));
	printf("should return neg value: %i\n", strcmp(str1, str4));
	printf("should return neg value: %i\n", strcmp(str1, str2));
	printf("should return pos value: %i\n", strcmp(str1, str3));
}*/

/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/20 10:10:22 by kimnguye	       #+#    #+#	      */
/*   Updated: 2024/03/21 10:46:37 by kimnguye         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abcd";
	
	printf("created function: %i\n", ft_strncmp(str1, str2, 3));
	printf("%i\n", ft_strncmp(str1, str2, 0));
	printf("%i\n", ft_strncmp(str1, str1, 5));
	printf("%i\n", ft_strncmp(str1, str2, 4)); 
	printf("%i\n", ft_strncmp("", "", 4)); 
	printf("original function: %i\n", strncmp(str1, str2, 3));
	printf("%i\n", strncmp(str1, str2, 0 ));
	printf("%i\n", strncmp(str1, str1, 5));
	printf("%i\n", strncmp(str1, str2, 4));
	printf("%i\n", strncmp("", "", 4));
}*/

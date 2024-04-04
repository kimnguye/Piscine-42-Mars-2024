/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/20 11:40:54 by kimnguye	       #+#    #+#	      */
/*   Updated: 2024/03/21 10:46:55 by kimnguye         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (to_find[size] != '\0')
	{
		size++;
	}
	if (size == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == *to_find)
			if (ft_strncmp(&(str[i]), to_find, size) == 0)
				return (&(str[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "rarararasputin";
	char	f[] = "rarasputin";
	char	str1[] = "coucou comment tu vas ? moi au top hein !";
	char	f1[] = "moi";

	printf("created: %s\n", ft_strstr(str,f));
	printf("original: %s\n", strstr(str,f));
	printf("created: %s\n", ft_strstr(str1,f1));
	printf("original: %s\n", strstr(str1,f1));
}*/

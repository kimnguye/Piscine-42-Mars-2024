/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/20 11:22:49 by kimnguye	       #+#    #+#	      */
/*   Updated: 2024/03/20 11:35:37 by kimnguye         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "coucou,";
	char	str2[] = " comment ca va ?";

	printf("%s\n", ft_strncat(str1, str2, 8));
	printf("%s\n", strncat(str1, str2, 8));
	return (0);
}*/

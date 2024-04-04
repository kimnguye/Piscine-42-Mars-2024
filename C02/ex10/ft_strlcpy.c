/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:58:47 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/19 13:19:53 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_len(char *src)
{	
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char	*dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_len(src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_len(src));
}
/*
int	main(void)
{
	char	str1[] = "coucou ca va ?";
	char	str2[] = "bien la famille";
	char	dest[] = "";

	printf("src=%s, dest=%s, size=%i returns:\n", str1, dest, 6);
	printf("dest=%s with len(src)=%i\n", dest, ft_strlcpy(dest, str1, 6));
	return (0);
}*/

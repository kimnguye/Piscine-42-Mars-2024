/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:24:32 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/21 16:32:21 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	i = 0;
	l = ft_len(dest);
	if (size <= l)
		return (ft_len(src) + size);
	while (src[i] && ((l + i + 1) < size))
	{
		dest[l + i] = src [i];
		i++;
	}
	dest[i + l] = '\0';
	return (ft_len(src) + l);
}

/*
int	main(int argc, char ** argv)
{
	char	*src;
	char	dest[50] = "debut de ma chaine:";
        char	dest1[50] = "debut de ma chaine:";
	
	if (argc == 2)
	{
		src = &argv[1][0];
		printf("created function returns %i and dest = %s\n",
       		ft_strlcat(dest, src, 50), dest);
		printf("original function returns %zu and dest = %s\n",
		strlcat(dest1, src, 50), dest1);
	}
}*/

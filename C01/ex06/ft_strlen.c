/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:16:13 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/17 13:04:54 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str ++;
	}
	return (n);
}

/*
int	main(int argc, char *argv[])
{
	int	n;
	n = ft_strlen(argv[1]);
	printf("%d",n);
	return (0);
}
*/

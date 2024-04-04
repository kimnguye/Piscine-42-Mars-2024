/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimnguye <kimnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:07:46 by kimnguye          #+#    #+#             */
/*   Updated: 2024/03/17 17:29:16 by kimnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab [size - i -1];
		tab[size - i -1] = tmp;
		i++;
	}
}

/*
int	main(void)
{
	int	i;
	int	tab[] = {1, 2, 3, 4, 5, 6};
	
	ft_rev_int_tab(tab, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/

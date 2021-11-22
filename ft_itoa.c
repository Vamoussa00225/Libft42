/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:40:35 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/13 15:57:11 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_size(int number)
{
	int	i;

	i = 0;
	if (number <= 0)
		i++;
	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int a)
{
	char	*a_convert;
	long	n;
	int		taille;
	int		i;

	i = 0;
	n = a;
	taille = count_size(n);
	a_convert = (char *)malloc(taille + 1);
	if (!a_convert)
		return (0);
	if (n < 0)
	{
		a_convert[0] = '-';
		n *= (-1);
		i = 1;
	}
	a_convert[taille] = '\0';
	while (--taille >= i)
	{
		a_convert[taille] = n % 10 + '0';
		n /= 10;
	}
	return (a_convert);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:28:59 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 17:34:45 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_replace;
	unsigned char	*s2_replace;

	i = 0;
	s1_replace = (unsigned char *)s1;
	s2_replace = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1_replace[i] == s2_replace[i]
		&& s1_replace && s2_replace)
	{
		i++;
	}
	return ((unsigned char)s1_replace[i] - (unsigned char)s2_replace[i]);
}

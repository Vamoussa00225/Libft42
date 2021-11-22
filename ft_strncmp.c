/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:45:28 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 17:55:20 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_replace;
	unsigned char	*s2_replace;

	i = 0;
	s1_replace = (unsigned char *)s1;
	s2_replace = (unsigned char *)s2;
	while (s1_replace[i] != '\0' && s2_replace[i] != '\0'
		&& s1_replace[i] == s2_replace[i])
	{
		i++;
	}
	if (s1_replace[i] != s2_replace[i] && i < n)
	{
		if (s1_replace[i] > s2_replace[i])
		{
			return (s1_replace[i] + s2_replace[i]);
		}
		else
		{
			return (s1_replace[i] - s2_replace[i]);
		}
	}
	return (0);
}

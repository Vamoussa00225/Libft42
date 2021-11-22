/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:36 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 17:58:26 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*s1_replace;

	i = 0;
	j = 0;
	s1_replace = (char *)s1;
	if (s2[j] == '\0')
		return (s1_replace);
	while (s1_replace[i] != '\0' && i < n)
	{
		while (s2[j] == s1_replace[i + j] && i + j < n)
		{
			if (s2[j + 1] == '\0')
			{
				return (&s1_replace[i]);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

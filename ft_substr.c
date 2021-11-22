/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:29:12 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/10 20:27:53 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_copy;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	s_copy = (char *)malloc(sizeof(char) * len + 1);
	if (!s_copy)
		return (0);
	while (s[start] != '\0' && i < len)
	{
		s_copy[i] = s[start];
		start++;
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

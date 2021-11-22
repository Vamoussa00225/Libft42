/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:17:26 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/14 17:16:14 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char const *chaine)
{
	int	i;

	i = 0;
	while (chaine[i] != '\0')
	{
		if (c == chaine[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s1_copy;

	i = 0;
	k = 0;
	if (!s1)
		return (0);
	while (ft_check(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (ft_check(s1[j - 1], set) && j >= i)
			j--;
	s1_copy = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!s1_copy)
		return (0);
	while (i < j)
		s1_copy[k++] = s1[i++];
	s1_copy[k] = 0;
	return (s1_copy);
}

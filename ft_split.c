/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:47:49 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/16 21:02:40 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			words++;
		i++;
	}
	if (s[i - 1] != c)
		words++;
	return (words);
}

char	**free_tab(char **tab, int n)
{
	while (--n >= 0)
		free(tab[n]);
	free(tab);
	return (0);
}

char	*def_word(char *s, int *len, char c)
{
	int		count;
	char	*temp;
	int		i;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	temp = &s[i];
	while (s[i] != '\0' && s[i] != c)
	{
		count++;
		i++;
	}
	*len = count;
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	int		words;
	char	*temp;
	char	**split;

	if (!s)
		return (0);
	words = count_word(s, c);
	temp = (char *)s;
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	len = 0;
	i = 0;
	while (i < words)
	{
		temp = def_word(temp + len, &len, c);
		split[i] = (char *)malloc(len + 1);
		if (!split[i])
			return (free_tab(split, i));
		ft_strlcpy (split[i++], temp, len + 1);
	}
	split[i] = NULL;
	return (split);
}

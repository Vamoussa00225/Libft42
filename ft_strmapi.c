/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:22:32 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/14 01:07:01 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s_copy;

	i = 0;
	if (!s)
		return (0);
	s_copy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s_copy)
		return (0);
	while (s[i] != '\0')
	{
		s_copy[i] = f(i, s[i]);
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

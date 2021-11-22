/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:13:17 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/20 17:41:15 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str_copy;
	size_t	i;

	i = ft_strlen(str);
	if (!str)
		return (NULL);
	str_copy = (char *)malloc(sizeof(char) * (i + 1));
	if (!str_copy)
		return (NULL);
	str_copy = ft_memcpy(str_copy, str, i);
	str_copy[i] = '\0';
	return (str_copy);
}

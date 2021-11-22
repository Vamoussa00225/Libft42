/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:08:43 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 18:10:27 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	const char	*src_replace;
	char		*dest_replace;
	size_t		i;

	i = 0;
	src_replace = (char *)source;
	dest_replace = (char *)destination;
	if (destination == NULL && source == NULL)
		return (NULL);
	if (dest_replace > src_replace)
	{
		while (size--)
			dest_replace[size] = src_replace[size];
	}
	else
	{
		while (i < size)
		{
			dest_replace[i] = src_replace[i];
			i++;
		}
	}
	return (dest_replace);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:23:24 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 17:35:56 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;
	char	*dest_replace;
	char	*src_replace;

	if (destination == NULL && source == NULL)
		return (NULL);
	dest_replace = (char *)destination;
	src_replace = (char *)source;
	i = 0;
	while (i < size)
	{
		dest_replace[i] = src_replace[i];
		i++;
	}
	return (destination);
}

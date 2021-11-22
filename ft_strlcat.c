/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:13:32 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 17:52:02 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	j;

	j = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dstsize <= dest_len)
		src_len += dstsize;
	else
		src_len += dest_len;
	while (src[j] != '\0' && dest_len + 1 < dstsize)
	{
		dst[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dst[dest_len] = 0;
	return (src_len);
}

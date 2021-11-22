/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:11:23 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/18 22:46:22 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	unsigned char	car;
	unsigned char	*p;

	p = (unsigned char *)s;
	car = (unsigned char)c;
	while (n--)
	{
		if (*p == car)
			return (p);
		p++;
	}
	return (NULL);
}

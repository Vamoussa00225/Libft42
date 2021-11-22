/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:51:04 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/19 19:12:45 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointeurGenerique, int value, size_t len)
{
	unsigned char	*ptr_remplacement;
	size_t			i;

	ptr_remplacement = (unsigned char *)pointeurGenerique;
	i = 0;
	while (i < len)
	{
		ptr_remplacement[i] = (unsigned char)value;
		i++;
	}
	return (pointeurGenerique);
}

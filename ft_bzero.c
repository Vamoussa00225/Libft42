/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:41:16 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/04 17:43:33 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *chaine, size_t nombreBit)
{
	size_t	i;
	char	*ptr_remplacement;

	i = 0;
	ptr_remplacement = (char *)chaine;
	while (i < nombreBit)
	{
		ptr_remplacement[i] = 0;
		i++;
	}
}

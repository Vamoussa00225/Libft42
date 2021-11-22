/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:51:28 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 17:48:10 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *chaine, int searchChar)
{
	size_t	i;
	char	caractere;
	char	*chaine_replace;

	i = 0;
	caractere = searchChar + '\0';
	chaine_replace = (char *)chaine;
	if (caractere == '\0')
		return (&chaine_replace[ft_strlen(chaine)]);
	while (chaine_replace[i] != caractere && chaine_replace[i] != '\0')
	{
		i++;
	}
	if (i == ft_strlen(chaine))
		return (0);
	return (&chaine_replace[i]);
}

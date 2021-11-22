/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:07:03 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/09 18:02:33 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *chaine, int searchChar)
{
	char	*chaine_replace;
	char	caractere;
	int		i;

	i = ft_strlen(chaine) - 1;
	chaine_replace = (char *)chaine;
	caractere = searchChar + '\0';
	if (caractere == '\0')
		return (&chaine_replace[i + 1]);
	while (i >= 0 && chaine_replace[i] != caractere)
	{
		i--;
	}
	if (i == -1)
		return (0);
	return (&chaine_replace[i]);
}

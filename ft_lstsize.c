/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:38:07 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/16 19:12:49 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*count;

	i = 1;
	count = lst;
	if (!lst)
		return (0);
	while (count->next != NULL)
	{
		i++;
		count = count->next;
	}
	return (i);
}

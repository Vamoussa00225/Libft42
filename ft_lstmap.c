/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:15:10 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/16 19:19:34 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*c;

	if (!lst || !f)
		return (NULL);
	p = NULL;
	while (lst)
	{
		c = ft_lstnew(f(lst->content));
		if (!c)
		{
			ft_lstclear(&c, del);
			return (NULL);
		}
		ft_lstadd_back(&p, c);
		lst = lst->next;
	}
	return (p);
}

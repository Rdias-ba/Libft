/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:02:07 by rdias-ba@st       #+#    #+#             */
/*   Updated: 2023/02/23 18:25:15 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*reset;

	reset = 0;
	if (lst && f && del)
	{
		while (lst)
		{
			nlst = ft_lstnew(f(lst->content));
			if (!nlst)
			{
				ft_lstclear(&reset, del);
				return (NULL);
			}
			ft_lstadd_back(&reset, nlst);
			lst = lst->next;
		}
	}
	return (reset);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:22:19 by rdias-ba@st       #+#    #+#             */
/*   Updated: 2023/02/23 18:21:34 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*stock;

	if (lst && del)
	{
		while (*lst)
		{
			stock = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = stock;
		}
		*lst = NULL;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:39:05 by rdias-ba@st       #+#    #+#             */
/*   Updated: 2023/02/23 18:25:23 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main(void)
{
	t_list *s1 = ft_lstnew("Salut");
	t_list *s2 = ft_lstnew('7');
	ft_lstadd_front(s1, s2);
	printf("%s", s1->content);
	return (0);
}
*/
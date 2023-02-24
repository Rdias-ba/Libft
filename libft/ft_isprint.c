/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:57:39 by rdias-ba          #+#    #+#             */
/*   Updated: 2023/02/23 18:21:21 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int a;
	a = 48;

	if (ft_isprint(a) == 1)
		printf("%s\n", "l'entier est un caractere imprimable");
	else
		printf("%s\n", "l'entier n'est pas un caractere imprimable");
	return 0;
}
*/

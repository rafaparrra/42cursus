/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:21:50 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/01 15:23:49 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		cont;
	char	*string1;
	char	*string2;

	cont = 0;
	string1 = (char *)s1;
	string2 = malloc(ft_strlen(string1) + 1);
	if (!string2)
		return (NULL);
	while (string1[cont] != '\0')
	{
		string2[cont] = string1[cont];
	cont++;
	}
	string2[cont] = '\0';
	return (string2);
}

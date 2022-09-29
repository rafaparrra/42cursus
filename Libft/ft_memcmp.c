/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:39:45 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/29 18:56:27 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cont;
	unsigned char	*string1;
	unsigned char	*string2;

	cont = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	cont = 0;
	while (cont < n)
	{
		if (string1[cont] != string2[cont])
			return (string1[cont] - string2[cont]);
	cont++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:49:37 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/29 16:00:51 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	cont;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	cont = 0;
	while (string1[cont] == string2[cont] && string1[cont]
		&& string2[cont] && cont < n)
		cont++;
	if (cont == n)
		cont--;
	return (string1[cont] - string2[cont]);
}

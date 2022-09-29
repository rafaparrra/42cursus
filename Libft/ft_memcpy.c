/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:17:29 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/26 18:59:07 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			cont;
	unsigned char	*string1;
	unsigned char	*string2;

	cont = 0;
	string1 = (unsigned char *)dst;
	string2 = (unsigned char *)src;
	while ((string1 != NULL || string2 != NULL) && cont < n)
	{
		string1[cont] = string2[cont];
		cont++;
	}
	return (string1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:26:33 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/26 19:04:14 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			cont;
	unsigned char	*string1;
	unsigned char	*string2;

	if (!dst && !src)
		return (NULL);
	cont = 0;
	string1 = (unsigned char *)dst;
	string2 = (unsigned char *)src;
	if (string2 < string1)
	{	
		while (len--)
			*(string1 + len) = *(string2 + len);
		return (dst);
	}
	while (len--)
		*string1++ = *string2++;
	return (dst);
}

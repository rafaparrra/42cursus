/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:43:12 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/25 20:24:10 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont1;
	size_t	cont2;
	size_t	len;

	cont1 = ft_strlen(dst);
	cont2 = ft_strlen(src);
	len = 0;
	if (dstsize <= cont1)
		cont2 = dstsize + cont2;
	else
		cont2 = cont1 + cont2;
	while (src[len] && (cont1 + 1) < dstsize)
	{
		dst[cont1] = src[len];
		cont1++;
		len++;
	}
	dst[cont1] = '\0';
	return (cont2);
}

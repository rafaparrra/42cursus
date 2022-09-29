/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:43:47 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/23 18:39:50 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	len;

	cont = 0;
	len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[cont] != '\0' && cont < (dstsize - 1))
		{
			dst[cont] = src[cont];
		cont++;
		}
		dst[cont] = '\0';
	}
	return (len);
}

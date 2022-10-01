/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:12:14 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/01 13:17:33 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	len;

	if (count == 0 || size == 0)
	{	
		count = 1;
		size = 1;
	}
	len = count * size;
	s = (char *)malloc(len);
	if (!s)
		return (NULL);
	ft_bzero(s, len);
	return (s);
}

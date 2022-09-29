/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:08:02 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/29 16:31:49 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cont;
	unsigned char	*string;

	string = (unsigned char *)s;
	cont = 0;
	while (cont < n)
	{
		if (string[cont] == (unsigned char) c)
			return (&string[cont]);
	cont++;
	}
	return (0);
}

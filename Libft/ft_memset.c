/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:45:33 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/25 20:52:31 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*string;

	cont = 0;
	string = (unsigned char *)b;
	while (cont < len)
		string[cont++] = c;
	return (string);
}

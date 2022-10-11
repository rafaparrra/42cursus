/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:55:51 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/11 20:14:21 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	cont;
	size_t	len;

	cont = 0;
	len = ft_strlen(s);
	while (cont < len)
	{
		f(cont, &s[cont]);
	cont++;
	}
}

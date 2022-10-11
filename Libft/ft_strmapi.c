/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:38:40 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/11 19:18:57 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	cont;
	size_t	len;
	char	*string;

	cont = 0;
	len = ft_strlen(s);
	string = malloc (sizeof (char) * len + 1);
	if (!string)
		return (NULL);
	while (s[cont])
	{
		string[cont] = f(cont, s[cont]);
	cont++;
	}
	string[cont] = '\0';
	return (string);
}

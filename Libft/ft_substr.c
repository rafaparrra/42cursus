/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:25:58 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/01 20:05:13 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cont;
	char	*subs;

	cont = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	subs = (char *)malloc(sizeof (char) * (len + 1));
	if (!(subs))
		return (NULL);
	while (cont < len && s[cont + start])
	{
		subs[cont] = s[cont + start];
	cont++;
	}
	subs[cont] = '\0';
	return (subs);
}

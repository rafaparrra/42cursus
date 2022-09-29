/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:19:30 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/27 18:57:19 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)s;
	while (len > 0 && str[len] != (char) c)
	{
		len--;
	}
	if (str[len] == (char) c)
		return (&str[len]);
	return (0);
}

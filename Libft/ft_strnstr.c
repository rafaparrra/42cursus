/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:01:04 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/29 20:04:43 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	cont1;
	unsigned int	cont2;
	char			*s1;
	char			*s2;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	cont1 = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[cont1] != '\0')
	{
		cont2 = 0;
		while (s1[cont1 + cont2] == s2[cont2]
			&& s1[cont1 + cont2] != '\0')
		{
			if (s2[cont2 + 1] == '\0' && cont1 + cont2 < len)
				return (&s1[cont1]);
			cont2++;
		}
		cont1++;
	}
	return (0);
}

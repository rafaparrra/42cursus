/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:21:05 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/06 18:35:43 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	start;
	int	cont2;

	start = 0;
	cont2 = 0;
	while (*s)
	{
		if (*s != c && cont2 == 0)
		{
			start++;
			cont2 = 1;
		}
		else if (*s == c)
			cont2 = 0;
		s++;
	}
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**subs;
	int		start;
	size_t	cont;
	size_t	subcont;

	start = -1;
	cont = 0;
	subcont = 0;
	subs = (char **)malloc (sizeof (char *) * (ft_countwords(s, c) + 1));
	if (!subs || !s)
		return (NULL);
	while (cont <= ft_strlen(s))
	{
		if (s[cont] != c && start < 0)
			start = cont;
		else if ((s[cont] == c || cont == ft_strlen(s)) && start >= 0)
		{
			subs[subcont++] = ft_substr(s, start, (cont - start));
			start = -1;
		}
		cont++;
	}
	subs[subcont] = 0;
	return (subs);
}

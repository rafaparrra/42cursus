/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:39:38 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/04 17:57:55 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		cont;
	int		len;

	cont = 0;
	len = ft_strlen(s1) - 1;
	while (s1[cont] && ft_strchr(set, s1[cont]))
		cont++;
	while (s1[cont] && s1[len] && ft_strrchr(set, s1[len]))
		len--;
	string = ft_substr(s1, cont, len - cont + 1);
	return (string);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:37:28 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/03 18:38:20 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		cont;
	int		len1;
	int		len2;

	cont = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	string = (char *)malloc(sizeof (char) * (len1 + len2 + 1));
	if (!string)
		return (NULL);
	while (s1[cont])
	{	
		string[cont] = s1[cont];
	cont++;
	}
	cont = 0;
	while (s2[cont])
	{
		string[len1] = s2[cont];
	cont++;
	len1++;
	}
	string[len1] = '\0';
	return (string);
}

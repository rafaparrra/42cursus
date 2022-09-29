/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:21:28 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/29 16:09:53 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		cont;
	char	*string;

	string = (char *)s;
	cont = 0;
	while (string[cont])
	{
		if (string[cont] == (char) c)
			return (&string[cont]);
	cont++;
	}
	if (!(char)c)
		return (&string[cont]);
	return (0);
}

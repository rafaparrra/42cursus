/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:42:35 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/12 20:01:00 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	int	cont;

	cont = 0;
	if (n <= 0)
		cont++;
	while (n)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		size;
	long	n2;

	n2 = n;
	size = ft_numlen(n);
	string = malloc (sizeof (char) * size + 1);
	if (!string)
		return (NULL);
	if (n2 < 0)
	{
		string[0] = '-';
		n2 = -n2;
	}
	if (n2 == 0)
		string[0] = '0';
	string[size--] = '\0';
	while (n2)
	{
		string[size] = n2 % 10 + '0';
		n2 = n2 / 10;
		size--;
	}
	return (string);
}

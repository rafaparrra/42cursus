/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:00:24 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/01 12:06:03 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				cont1;
	int				cont2;
	int				cont3;
	unsigned char	*string1;

	cont1 = 0;
	cont2 = 1;
	cont3 = 0;
	string1 = (unsigned char *)str;
	while ((str[cont1] == 32) || (str[cont1] >= 9 && str[cont1] <= 13))
	{
		cont1++;
	}
	if ((str[cont1] == '-') || (str[cont1] == '+'))
	{
		if (str[cont1] == '-')
		cont2 *= -1;
	cont1++;
	}
	while (str[cont1] && (str[cont1] >= '0' && str[cont1] <= '9'))
	{
	cont3 = (cont3 * 10) + (str[cont1] - '0');
	cont1++;
	}
	return (cont2 * cont3);
}

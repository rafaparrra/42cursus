/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:32:12 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/11 20:34:29 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	cont;

	cont = 0;
	while (s[cont])
	{
		write(fd, &s[cont], 1);
	cont++;
	}
	write(fd, "\n", 1);
}

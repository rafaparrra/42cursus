/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:35:12 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/11 21:30:59 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd(45, fd);
		ft_putchar_fd(50, fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		n = -n;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{	
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

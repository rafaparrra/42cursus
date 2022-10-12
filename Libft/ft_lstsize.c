/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:10:00 by rparra-t          #+#    #+#             */
/*   Updated: 2022/10/12 18:26:11 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cont1;
	int		cont2;

	cont1 = lst;
	cont2 = 0;
	while (cont1 != NULL)
	{
		cont1 = cont1->next;
		cont2++;
	}
	return (cont2);
}

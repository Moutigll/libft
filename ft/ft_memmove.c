/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:29:19 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/14 18:47:17 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, t_size n)
{
	t_size				i;
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	unsigned char		*tab;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	tab = ft_calloc(n, 1);
	while (i < n)
	{
		tab[i] = ptr_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = tab[i];
		i++;
	}
	free(tab);
	return (dest);
}

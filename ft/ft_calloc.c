/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:55:57 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/14 18:41:58 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(t_size nmemb, t_size size)
{
	void	*dest;

	dest = (void *)malloc(nmemb * size);
	if (dest == 0)
		return (0);
	ft_bzero(dest, nmemb * size);
	return (dest);
}

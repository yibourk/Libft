/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibourk <yibourk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:27:54 by yibourk           #+#    #+#             */
/*   Updated: 2024/11/07 17:27:54 by yibourk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && (count > ((size_t)-1) / size))
		return (NULL);
	result = (void *)malloc(size * count);
	if (!result)
		return (NULL);
	if (result)
		ft_bzero(result, size * count);
	return (result);
}

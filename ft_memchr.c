/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibourk <yibourk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:17:25 by yibourk           #+#    #+#             */
/*   Updated: 2024/11/07 16:17:25 by yibourk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n){
	size_t	i;
	const char	*temp;

	i = 0;
	temp = (const char *)s;
	while (i < n)
	{
		if (temp[i] == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
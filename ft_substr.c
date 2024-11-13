/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibourk <yibourk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:39:17 by yibourk           #+#    #+#             */
/*   Updated: 2024/11/13 19:39:17 by yibourk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*result;

	i = start;
	j = 0;
	size = len;
	if (len > ft_strlen(s))
		size = ft_strlen(s);
	result = (char *)malloc(size + 1);
	if (!result || !s)
		return (0);
	while (i < ft_strlen(s) && j < len)
		result[j++] = s[i++];
	result[j] = 0;
	return (result);
}

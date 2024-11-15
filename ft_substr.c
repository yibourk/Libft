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
	char	*result;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	i = start;
	j = 0;
	while (j < len && s[i])
		result[j++] = s[i++];
	result[j] = 0;
	return (result);
}

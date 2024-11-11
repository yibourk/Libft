/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibourk <yibourk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:13:42 by yibourk           #+#    #+#             */
/*   Updated: 2024/11/07 17:13:42 by yibourk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			result = ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		result = ((char *)(s + i));
	if (!result)
		return (NULL);
	return (result);
}

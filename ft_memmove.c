/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibourk <yibourk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:28:38 by yibourk           #+#    #+#             */
/*   Updated: 2024/11/05 13:28:38 by yibourk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n){
	if (dest < src)
		while (n--)
			dest[n] = src[n];
	else
		if (!n || dest == src)
			return (dest);
		while (n--)
			*dest++ = *src++;
	return (dest);
}
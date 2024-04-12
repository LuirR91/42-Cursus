/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:13:11 by luiribei          #+#    #+#             */
/*   Updated: 2024/04/12 13:49:12 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = 0;
	
	if (size == 0 || size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (src[s] && d < (size - 1))
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (ft_strlen(src) + ft_strlen(src));
}
/*
int	main()
{
	char	src[] = "123456";
	char	dest[] = "123456";

	printf("%zu\n", ft_strlcat(dest, src, 2));
	return (0);
}*/

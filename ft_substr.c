/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revieira <revieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:04:35 by coder             #+#    #+#             */
/*   Updated: 2022/09/26 21:30:20 by revieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_memory(size_t strl, unsigned int start, size_t len)
{
	size_t	memory;

	memory = len + 1;
	if (start > strl)
		memory = 1;
	else if (len == strl)
	{
		len = strl;
		memory = len + 1;
		if (strl < start + len)
			memory = len - start + 1;
	}
	return (memory);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	malloc_size;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	if (!s)
		return (0);
	if (len > size)
		len = size;
	malloc_size = ft_memory(size, start, len);
	sub = (char *)malloc(sizeof(char) * malloc_size);
	if (!sub)
		return (0);
	i = 0;
	while (i < len && len <= size && start < size)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

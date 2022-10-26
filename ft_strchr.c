/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revieira <revieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:17:06 by coder             #+#    #+#             */
/*   Updated: 2022/09/26 21:29:22 by revieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	if (!s)
		return (0);
	if (c == '\0')
		return (&((char *)s)[len]);
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)
			return (&(((char *)s)[i]));
		i++;
	}	
	return (0);
}

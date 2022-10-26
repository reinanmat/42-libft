/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revieira <revieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:37:59 by coder             #+#    #+#             */
/*   Updated: 2022/09/27 15:04:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str || !s)
		return (0);
	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		str[j] = ((*f)(i++, s[j]));
		j++;
	}
	str[j] = '\0';
	return (str);
}

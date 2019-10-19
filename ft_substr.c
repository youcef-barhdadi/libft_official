/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarhdad <ybarhdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:04:13 by ybarhdad          #+#    #+#             */
/*   Updated: 2019/10/18 21:37:32 by ybarhdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*new;

	i = 0;
	if (!s && !start)
		return (NULL);
	if (start + len > ft_strlen(s) || ft_strlen(s) < (size_t)start)
		return (NULL);
	new = (char *)ft_calloc((size_t)(len + 1), sizeof(char));
	if (!new)
		return (NULL);
	while (len--)
	{
		new[i] = *(s + start);
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

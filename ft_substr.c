/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvieira <luvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:22:02 by luvieira          #+#    #+#             */
/*   Updated: 2026/05/26 21:08:05 by luvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = ft_strlen(s);
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	if (start < i)
	{
		i = 0;
		while (s[start + i] != '\0' && i < len)
		{
			substring[i] = s[start + i];
			i++;
		}
		substring[i] = '\0';
	}
	return (substring);
}

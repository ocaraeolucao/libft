/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvieira <luvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:04:53 by luvieira          #+#    #+#             */
/*   Updated: 2026/05/26 21:11:11 by luvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*stringjoin;
	size_t	s1size;
	size_t	s2size;
	size_t	i;

	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	i = 0;
	stringjoin = (char *)malloc(s1size + s2size);
	if (!stringjoin)
		return (NULL)
	
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvieira <luvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 20:49:11 by luvieira          #+#    #+#             */
/*   Updated: 2026/05/25 18:52:41 by luvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (space(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		result *= 10;
		result += (nptr[i] - '0');
		i++;
	}
	return (result *= sign);
}

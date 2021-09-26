/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorros <gmorros@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 19:55:48 by gmorros           #+#    #+#             */
/*   Updated: 2020/05/05 15:59:56 by gmorros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int			ft_atoi(const char *str)
{
	int			sign;
	long long	ans;

	ans = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sign = (*str == '-' ? -1 : 1);
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (sign * ans * 10 > INT_MAX || sign * ans * 10 < INT_MIN)
			error();
		ans = ans * 10 + sign * (*str++ - '0');
	}
	if (*str != '\0')
		error();
	return ((int)ans);
}

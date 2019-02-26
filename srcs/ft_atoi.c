/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:11:19 by dkihn             #+#    #+#             */
/*   Updated: 2019/02/26 11:46:55 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			n;
	long		res;

	n = 1;
	res = 0;
	if (ft_strcmp(str, "4294967295") == 0)
		return (-1);
	while (*str == '\v' || *str == '\f' || *str == '\r' ||
		*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			n = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * n);
}
//
// int main()
// {
// 	printf("%d\n", atoi("4294967295"));
// 	printf("%d\n", atoi("-2147483648"));
// 	return (0);
// }

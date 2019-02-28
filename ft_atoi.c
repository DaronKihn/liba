/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:11:19 by dkihn             #+#    #+#             */
/*   Updated: 2019/02/28 21:34:28 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	int		f_check(const char *str)
// {
// 	if ((ft_strcmp(str, "9223372036854775807") >= 0) && (ft_strlen(str) >= 19))
// 		return (-1);
// 	if ((ft_strcmp(str, "−9223372036854775808") <= 0) && (ft_strlen(str) >= 20))
// 		return (0);
// 	return (1);
// }
//
// static	int		f_check_num(const char *str)
// {
// 	size_t	len;
// 	size_t	i;
// 	size_t	k;
//
// 	i = 0;
// 	len = ft_strlen(str);
// 	if (*(str + i) == '+' || *(str + i) == '-')
// 		i++;
// 	if (i == 1)
// 		k = 20;
// 	else
// 		k = 19;
// 	if (len >= k)
// 		while (i < k)
// 		{
// 			if (*(str + i) >= '0' && *(str + i) <= '9')
// 				i++;
// 			else
// 				return (0);
// 		}
// 	else
// 		return (0);
// 	return (1);
//
// }


int		ft_atoi(const char *str)
{
	int			n;
	long long		res;

	n = 1;
	res = 0;
	 // if (ft_strlen(str) >= 19 && ft_strcmp(str, "9223372036854775807") >= 0)
	 // 	return (-1);
	 // if (ft_strlen(str) >= 20 && ft_strcmp(str, "−9223372036854775808") >= 0)
	 // 	return (0);
	if (ft_strlen(str) >= 19 && ft_strcmp(str, "9223372036854775807") >= 0)
		return (-1);
	if (ft_strlen(str) >= 20 && ft_strcmp(str, "-9223372036854775808") >= 0)
		return (0);
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
// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d ft_atoi \n", ft_atoi(argv[1]));
// 	printf("%d atoi \n", atoi(argv[1]));
// 	return (0);
//
// }

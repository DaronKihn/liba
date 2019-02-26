/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat[0].c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:42:10 by dkihn             #+#    #+#             */
/*   Updated: 2019/02/26 10:03:12 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = 0;
	len = 0;
	while (*(dst + i))
	{
		len++;
		i++;
	}
	while (*(src + n) && n < size)
	{
		*(dst + i) = *(src + n);
		i++;
		n++;
		len++;
	}
	while (*(src + n))
	{
		*(dst + i) = *(src + n);
		i++;
		len++;
		n++;
	}
	*(dst + i) = '\0';
	return (len++);
}
*/

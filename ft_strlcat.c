/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:48:29 by dkihn             #+#    #+#             */
/*   Updated: 2019/02/27 17:25:07 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	n;
	size_t	s1;

	n = 0;
	while (*(dst + n) && (n < size))
		n++;
	s1 = n;
	while (*(src + (n - s1)) && (n < (size - 1)))
	{
		*(dst + n) = *(src + (n - s1));
		n++;
	}
	if (s1 < size)
		*(dst + n) = '\0';
	return (s1 + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:48:29 by dkihn             #+#    #+#             */
/*   Updated: 2019/02/26 13:35:09 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	len_d;
	size_t	n;
	size_t	k;
	size_t	res;

	len_d = ft_strlen(dst);
	n = 0;
	k = 0;
	res = 0;
	while (*(dst + k))
		k++;
	//printf("%zu sizeof\n", (sizeof(dst)));
//	printf("%zu strlen\n", ft_strlen(dst));
	while (n < (size - len_d) && (*src))
	{
		*(dst + k) = *(src + n);
		k++;
		n++;
	}
	*(dst + k) = '\0';
	len_d < size ? (res = len_d + ft_strlen(src)) :
		(res = size + ft_strlen(src));
	return (res);
}

int main() {
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
		//char buff1[0xF00] = "there is no stars in the sky";
		char buff2[0xF00] = "there is no stars in the sky";
		size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

		printf("%zu\n",ft_strlcat(buff2, str, max));
	return (0);
}

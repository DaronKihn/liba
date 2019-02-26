/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:40:33 by dkihn             #+#    #+#             */
/*   Updated: 2019/01/24 16:18:02 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)s;
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	while (*(s2 + i))
		i++;
	while (*(s2 + i) != c)
		i--;
	return (s2 + i);
}

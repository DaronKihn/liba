/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 18:22:33 by dkihn             #+#    #+#             */
/*   Updated: 2019/02/27 17:28:50 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	search_n(char const *s)
{
	size_t		i_n;

	i_n = 0;
	while (s[i_n] == ' ' || s[i_n] == '\n' || s[i_n] == '\t')
		i_n++;
	return (i_n);
}

static	size_t	search_k(char const *s)
{
	size_t	i_k;

	i_k = 1;
	while (s[ft_strlen(s) - i_k] == ' ' || s[ft_strlen(s) - i_k] == '\n' ||
	s[ft_strlen(s) - i_k] == '\t')
		i_k++;
	return (i_k - 1);
}

static	char	*f_copy(size_t i_n, size_t i_k, char const *s, char *cpy)
{
	int	i;

	i = 0;
	if (i_k == ft_strlen(s))
	{
		cpy[i] = '\0';
		return (cpy);
	}
	while (i_n != (ft_strlen(s) - i_k))
	{
		cpy[i] = s[i_n];
		i_n++;
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char			*ft_strtrim(char const *s)
{
	char	*p;

	if (!s)
		return (NULL);
	p = NULL;
	if ((search_n(s) == search_k(s)) && (search_k(s)) == ft_strlen(s))
	{
		if (!(p = (char *)malloc(sizeof(char) * (1))))
			p[0] = '\0';
		return (p);
	}
	else
		p = (char *)malloc(sizeof(char) * (ft_strlen(s) -
		search_n(s) - search_k(s) + 1));
	if (p)
		return (f_copy(search_n(s), search_k(s), s, p));
	else
		return (NULL);
}

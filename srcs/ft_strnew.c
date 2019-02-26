/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 22:30:47 by dkihn             #+#    #+#             */
/*   Updated: 2019/02/20 10:13:06 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	p = NULL;
	if(!(p = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(p, (size + 1));
	return(p);
}

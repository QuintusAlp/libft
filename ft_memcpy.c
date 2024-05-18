/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:17:05 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/20 13:07:18 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	char		*source;

	i = 0;
	if (!dst && !src)
		return (0);
	destination = (char *)dst;
	source = (char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
    char *dst = NULL;
    char *src = NULL;
    ft_memcpy("hello", src, 4);
    printf("%d \n", dst[0]);
    
    return 0;
}*/

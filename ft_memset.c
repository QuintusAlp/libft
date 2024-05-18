/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:21:51 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/15 10:59:37 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((char *)b + i) = c;
		i++;
	}
	return (b);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    int i = 1234;
	int *c = &i;
    printf("%s \n", memset(c,'#', 2));
    printf("%s \n", ft_memset(c,'#', 2));

    return 0;
}*/

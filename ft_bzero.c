/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:34:10 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/15 20:24:20 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = '\0';
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
 int main(void)
 {
    char str[] = "hello";
    printf("%s \n", str);
    ft_bzero(str, 3);
    printf("%c", str[4]);
    return 0;
 }*/
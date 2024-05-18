/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:28:08 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/16 10:46:10 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
	int n = 15;
	char str[] = "le goat\200";
	int c = '\200';
	if(ft_memchr(str, c, n) == memchr(str, c, n))
		printf("ok");
	else
		printf("error return : %s and should return %s",
	(char*)ft_memchr(str, c, n)
	, (char*)memchr(str, c, n) );
	
	return 0;
}*/

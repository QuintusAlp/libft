/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:47:19 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/09 15:29:27 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if ((char)c == '\0')
		return ((char *)(s + ft_strlen((char *)s)));
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if ((const char)c == s[i])
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
/*
 #include <stdio.h>
 int main(void)
 {
	char str[] = "heollollllao";
	printf("%s \n", strrchr(str, 'l'));
	printf("%s \n", ft_strrchr(str, 'l'));
 }*/
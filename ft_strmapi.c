/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:38:32 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/07 17:43:03 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		size;

	size = 0;
	while (s[size])
	{
		size++;
	}
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	size = 0;
	while (s[size])
	{
		str[size] = (*f)(size, s[size]);
		size++;
	}
	str[size] = '\0';
	return (str);
}
/*
char uppercase(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

int main(void)
{
	printf("%s", ft_strmapi("Hello", &uppercase));
}*/
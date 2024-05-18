/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:12:02 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/13 14:09:27 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i;

	if (start >= (unsigned int)ft_strlen(s))
	{
		new_string = malloc(sizeof(char) * 1);
		if (!new_string)
			return (0);
		new_string[0] = '\0';
		return (new_string);
	}
	if (len > (unsigned int)ft_strlen(s) - ((unsigned int)start))
		len = (unsigned int)ft_strlen(s) - ((unsigned int)start);
	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		new_string[i] = s[start + i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*

int main(void)
{
    char str[] = "1";
    printf("%s \n", ft_substr("", 0, 0));
    return 0;
}*/

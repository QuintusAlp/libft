/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 10:18:59 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/15 13:09:27 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findchar(char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		end;
	int		i;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_findchar(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && (ft_findchar(s1[end - 1], set)))
		end--;
	new_str = malloc(sizeof(char) * ((end - start) + 1));
	if (!new_str)
		return (0);
	i = 0;
	while (start < end)
	{
		new_str[i] = s1[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int main()
{
	char	*s1 = "test";
	char	*sep = NULL;
	
	printf("%s \n", ft_strtrim(s1, sep));
    return 0;
}*/

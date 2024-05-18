/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 10:55:39 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/15 14:30:17 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **array, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			k++;
		i++;
	}
	return (k);
}

static char	**ft_array_malloc(char const *s, char c, t_split st)
{
	st.str = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!st.str)
		return (0);
	while (s[st.i])
	{
		if (s[st.i] != c && s[st.i] != '\0')
		{
			st.j = 0;
			while (s[st.i + st.j] != c && s[st.i + st.j] != '\0')
				st.j++;
			st.str[st.k] = malloc(sizeof(char) * (st.j + 1));
			if (st.str[st.k] == NULL)
			{
				ft_free(st.str, st.k);
				return (NULL);
			}
			st.k++;
			st.i += st.j - 1;
		}
		st.i++;
	}
	st.str[st.k] = NULL;
	return (st.str);
}

static void	ft_fill_array_str(char const *s, char c, char **array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
			{
				array[k][j] = s[i + j];
				j++;
			}
			array[k][j] = '\0';
			i += j - 1;
			k++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	t_split	st;

	if (s == NULL)
		return (NULL);
	st.i = 0;
	st.j = 0;
	st.k = 0;
	array = ft_array_malloc(s, c, st);
	if (array == NULL)
		return (NULL);
	ft_fill_array_str(s, c, array);
	return (array);
}
/*
#include <stdio.h>
int main(void)
{
    char *s = NULL;

	char **result = ft_split(s, ' ');
	int i = 0;
	while (result[i])
	{
		
		
		printf("%s \n",result[i] );
		i++;
	}
	printf("success");
}*/

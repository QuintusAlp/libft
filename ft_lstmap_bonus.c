/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:44:51 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/16 11:12:54 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkmalloc(t_list *lst, t_list **start_list, void (*del)(void *))
{
	if (!lst)
	{
		ft_lstclear(start_list, del);
		return (0);
	}
	else
		return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*start_list;

	if (!lst || !f || !del)
		return (NULL);
	start_list = malloc(sizeof(t_list));
	if (!start_list)
		return (NULL);
	element = start_list;
	while (lst)
	{
		element->content = f(lst->content);
		lst = lst->next;
		if (lst)
		{
			element->next = malloc(sizeof(t_list));
			if (!ft_checkmalloc(element->next, &start_list, del))
				return (NULL);
			element = element->next;
		}
		else
			element->next = NULL;
	}
	return (start_list);
}
/*
#include <stdio.h>
void ft_printlst(t_list **lst)
{
	t_list *tmp = *lst;
	while(tmp != NULL) 
	{
		printf("%s ", (char*)tmp->content); 
		tmp = tmp->next; 
	} 
}
void *ft_iter(void *content)
{
	char *str = (char *)content;
	printf("%s \n", str);
	str = NULL;
	return (str);
}
void ft_del(void *c)
{
	void *a = c;
	printf("%s",(char*) a);
	return ;
}
int	main(void)
{
	t_list *element_3 = ft_lstnew("c");
	t_list *element_2 = ft_lstnew("b");
	element_2->next = element_3;
	t_list *element_1 = ft_lstnew("a");
	element_1->next = element_2;
	t_list *new_list = ft_lstmap(NULL,  ft_iter, ft_del);
	ft_printlst(&new_list);
}*/
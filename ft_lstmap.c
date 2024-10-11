/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:08:49 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 21:10:26 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates the list ’lst’ and applies the function ’f’ to the content of each
// element. Creates a new list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to delete the content of an
// element if needed.
#include "libft.h"

static t_list	*ft_create_mapped_node(
	t_list *lst_node, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new_node;

	content = f(lst_node->content);
	if (!content)
		return (NULL);
	new_node = ft_lstnew(content);
	if (!new_node)
	{
		del(content);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_node = ft_create_mapped_node(lst, f, del);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

void *multiply_by_two(void *value) {
    int *num = (int *)value;
    int *result = (int *)malloc(sizeof(int));
    *result = (*num) * 2;
    return result;
}

void free_int(void *value) {
    free(value);
}

int main() {
    t_list *list = NULL;
    for (int i = 10; i >= 1; i--) {
        t_list *new_node = (t_list *)malloc(sizeof(t_list));
        int *content = (int *)malloc(sizeof(int));
        *content = i;
        new_node->content = content;
        new_node->next = list;
        list = new_node;
    }

    printf("Original linked list: ");
    t_list *current = list;
    while (current) {
        printf("%d ", *(int *)(current->content));
        current = current->next;
    }
    printf("\n");

    t_list *result = ft_lstmap(list, multiply_by_two, free_int);

    printf("Modified linked list: ");
    while (result) {
        printf("%d ", *(int *)(result->content));
        t_list *temp = result;
        result = result->next;
        free(temp->content);
        free(temp);
    }
    printf("\n");

    current = list;
    while (current) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
*/

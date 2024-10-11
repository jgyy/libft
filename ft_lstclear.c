/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:51:16 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 22:17:57 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given element and every successor of that element,
// using the function ’del’ and free(3). Finally, the pointer to the list must
// be set to NULL.
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next_node = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next_node;
	}
	*lst = NULL;
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void del_function(void *content)
{
    free(content);
}

void test_ft_lstclear_null_list()
{
    printf("Running: test_ft_lstclear_null_list...\n");
    t_list *lst = NULL;
    ft_lstclear(&lst, del_function);
    if (lst != NULL) {
        printf("Failed: Expected lst to be NULL after clearing NULL list.\n");
        exit(1);
    }

    printf("Passed: test_ft_lstclear_null_list\n");
}

void test_ft_lstclear_one_node()
{
    printf("Running: test_ft_lstclear_one_node...\n");
    t_list *lst = malloc(sizeof(t_list));
    lst->content = malloc(10);
    lst->next = NULL;

    ft_lstclear(&lst, del_function);
    if (lst != NULL) {
        printf("Failed: Expected lst to be NULL.\n");
        exit(1);
    }

    printf("Passed: test_ft_lstclear_one_node\n");
}

void test_ft_lstclear_multiple_nodes()
{
    printf("Running: test_ft_lstclear_multiple_nodes...\n");
    t_list *lst = malloc(sizeof(t_list));
    lst->content = malloc(10);
    lst->next = malloc(sizeof(t_list));
    lst->next->content = malloc(10);
    lst->next->next = NULL;

    ft_lstclear(&lst, del_function);
    if (lst != NULL) {
        printf("Failed: Expected lst to be NULL!\n");
        exit(1);
    }

    printf("Passed: test_ft_lstclear_multiple_nodes\n");
}

void test_ft_lstclear_content_deleted()
{
    printf("Running: test_ft_lstclear_content_deleted...\n");
    t_list *lst = malloc(sizeof(t_list));
    int *content = malloc(sizeof(int));
    *content = 12345;
    lst->content = content;
    lst->next = NULL;

    ft_lstclear(&lst, del_function);
    if (lst != NULL) {
        printf("Failed: Expected lst to be NULL after clearing content.\n");
        exit(1);
    }

    printf("Passed: test_ft_lstclear_content_deleted\n");
}

int main()
{
    test_ft_lstclear_null_list();
    test_ft_lstclear_one_node();
    test_ft_lstclear_multiple_nodes();
    test_ft_lstclear_content_deleted();

    printf("All tests passed!\n");
    return 0;
}
*/

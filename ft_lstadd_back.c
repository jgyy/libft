/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:35:40 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:12:28 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the element ’new’ at the end of the list.
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(t_list *lst) {
    while (lst != NULL) {
        printf("%d -> ", *((int *)lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int main() {
    t_list *list = NULL;

    int value1 = 10;
    t_list *new1 = malloc(sizeof(t_list));
    new1->content = &value1;
    new1->next = NULL;
    ft_lstadd_back(&list, new1);
    printf("After Test Case 1:\n");
    print_list(list);

    int value2 = 20;
    t_list *new2 = malloc(sizeof(t_list));
    new2->content = &value2;
    new2->next = NULL;
    ft_lstadd_back(&list, new2);
    printf("After Test Case 2:\n");
    print_list(list);

    int value3 = 30;
    t_list *new3 = malloc(sizeof(t_list));
    new3->content = &value3;
    new3->next = NULL;
    ft_lstadd_back(&list, new3);
    printf("After Test Case 3:\n");
    print_list(list);

    ft_lstadd_back(&list, NULL);
    printf("After Test Case 4:\n");
    print_list(list);

    int value4 = 40;
    t_list *new4 = malloc(sizeof(t_list));
    new4->content = &value4;
    new4->next = NULL;
    ft_lstadd_back(&list, new4);
    printf("After Test Case 5:\n");
    print_list(list);

    int value5 = 50;
    t_list *new5 = malloc(sizeof(t_list));
    new5->content = &value5;
    new5->next = NULL;
    ft_lstadd_back(&list, new5);
    printf("After Test Case 6:\n");
    print_list(list);

    ft_lstadd_back(&list, NULL);
    ft_lstadd_back(&list, NULL);
    printf("After Test Case 7:\n");
    print_list(list);

    int value6 = 60;
    t_list *new6 = malloc(sizeof(t_list));
    new6->content = &value6;
    new6->next = NULL;
    ft_lstadd_back(&list, new6);
    printf("After Test Case 8:\n");
    print_list(list);

    int value7 = 70;
    t_list *new7 = malloc(sizeof(t_list));
    new7->content = &value7;
    new7->next = NULL;
    ft_lstadd_back(&list, new7);

    int value8 = 80;
    t_list *new8 = malloc(sizeof(t_list));
    new8->content = &value8;
    new8->next = NULL;
    ft_lstadd_back(&list, new8);
    printf("After Test Case 9:\n");
    print_list(list);

    int value9 = 90;
    t_list *new9 = malloc(sizeof(t_list));
    new9->content = &value9;
    new9->next = NULL;
    ft_lstadd_back(&list, new9);

    int value10 = 100;
    t_list *new10 = malloc(sizeof(t_list));
    new10->content = &value10;
    new10->next = NULL;
    ft_lstadd_back(&list, new10);
    printf("After Test Case 10:\n");
    print_list(list);

    t_list *current = list;
    while (current != NULL) {
        t_list *next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:27:02 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:13:05 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the element ’new’ at the beginning of the list.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>
#include <string.h>

void    ft_lstadd_front(t_list **lst, t_list *new);

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

static int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		num_length;
	int		is_negative;
	int		i;
	char	*result;

	num_length = get_num_length(n);
	is_negative = n < 0;
	result = (char *)malloc(sizeof(char) * (num_length + 1));
	if (result == NULL)
		return (NULL);
	if (is_negative)
	{
		result[0] = '-';
		n = -n;
	}
	result[num_length] = '\0';
	i = num_length - 1;
	while (i >= is_negative)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (result);
}

void print_list(t_list *lst) {
    while (lst) {
        printf("%s ", (char *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

int main() {
    t_list *head = NULL;

    printf("Test Case 1:\n");
    printf("Adding 'elem1' to an empty list:\n");
    ft_lstadd_front(&head, ft_lstnew("elem1"));
    print_list(head);
    printf("\n");

    printf("Test Case 2:\n");
    printf("Adding 'elem2' and 'elem3' to an empty list:\n");
    ft_lstadd_front(&head, ft_lstnew("elem2"));
    ft_lstadd_front(&head, ft_lstnew("elem3"));
    print_list(head);
    printf("\n");

    printf("Test Case 3:\n");
    printf("Adding 'elem4' to the list:\n");
    ft_lstadd_front(&head, ft_lstnew("elem4"));
    print_list(head);
    printf("\n");

    printf("Test Case 4:\n");
    printf("Adding 'elem5', 'elem6', and 'elem7' to the list:\n");
    ft_lstadd_front(&head, ft_lstnew("elem5"));
    ft_lstadd_front(&head, ft_lstnew("elem6"));
    ft_lstadd_front(&head, ft_lstnew("elem7"));
    print_list(head);
    printf("\n");

    printf("Test Case 5:\n");
    printf("Adding NULL to the list:\n");
    ft_lstadd_front(&head, NULL);
    print_list(head);
    printf("\n");

    printf("Test Case 6:\n");
    printf("Adding 'mixed1' (string) and 42 (integer) to the list:\n");
    ft_lstadd_front(&head, ft_lstnew("mixed1"));
    ft_lstadd_front(&head, ft_lstnew(ft_itoa(42)));
    print_list(head);
    printf("\n");

    printf("Test Case 7:\n");
    printf("Adding 'elem8', 'elem9', and 'elem10' to the list:\n");
    ft_lstadd_front(&head, ft_lstnew("elem8"));
    ft_lstadd_front(&head, ft_lstnew("elem9"));
    ft_lstadd_front(&head, ft_lstnew("elem10"));
    print_list(head);
    printf("\n");

    printf("Test Case 8:\n");
    printf("Adding 'new_elem' to a NULL list:\n");
    ft_lstadd_front(NULL, ft_lstnew("new_elem"));
    print_list(head);
    printf("\n");

    printf("Test Case 9:\n");
    printf("Adding NULL to a NULL list:\n");
    ft_lstadd_front(NULL, NULL);
    print_list(head);
    printf("\n");

    printf("Test Case 10:\n");
    printf("Adding 'mixed1' and 42 to the list with mixed types:\n");
    ft_lstadd_front(&head, ft_lstnew("mixed1"));
    ft_lstadd_front(&head, ft_lstnew(ft_itoa(42)));
    print_list(head);
    printf("\n");

    return 0;
}
*/

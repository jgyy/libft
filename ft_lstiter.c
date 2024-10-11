/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:00:13 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:14:58 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates the list ’lst’ and applies the function ’f’ to the content of
// each element.
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
} Student;

void print_student(void *content) {
    Student *student = (Student *)content;
    printf("ID: %d, Name: %s\n", student->id, student->name);
}

void print_float(void *content) {
    float value = *(float *)content;
    printf("%f\n", value);
}

void print_mixed(void *content) {
	int integer = 42;
	char character = 'A';
	float floating = 3.14159;

	if (content == &integer) {
        printf("Integer: %d\n", *(int *)content);
    } else if (content == &character) {
        printf("Character: %c\n", *(char *)content);
    } else if (content == &floating) {
        printf("Floating: %f\n", *(float *)content);
    }
}

void print_content(void *content) {
    if (content == NULL) {
        printf("NULL\n");
    } else if ((intptr_t)content >= 0 && (intptr_t)content <= 99) {
        printf("Integer: %d\n", (int)(intptr_t)content);
    } else if ((intptr_t)content == 100) {
        printf("Special Integer: 100\n");
    } else if (content == (void *)1000) {
        printf("Pointer to 1000\n");
    } else {
        printf("Unknown content type\n");
    }
}

void do_nothing(void *content) {
    if (content)
		return ;
	else
		return ;
}

void ft_lstiter(t_list *lst, void (*f)(void *));

int main() {
    t_list node3 = {.content = "Node 3", .next = NULL};
    t_list node2 = {.content = "Node 2", .next = &node3};
    t_list node1 = {.content = "Node 1", .next = &node2};
    t_list *head = &node1;

    printf("Test 1:\n");
    ft_lstiter(head, print_content);

    printf("\nTest 2:\n");
    ft_lstiter(NULL, print_content);

    printf("\nTest 3:\n");
    ft_lstiter(head, do_nothing);

    printf("\nTest 4:\n");
    t_list single_node = {.content = "Single Node", .next = NULL};
    ft_lstiter(&single_node, print_content);

    printf("\nTest 5:\n");
    t_list int_node3 = {.content = (void *)3, .next = NULL};
    t_list int_node2 = {.content = (void *)2, .next = &int_node3};
    t_list int_node1 = {.content = (void *)1, .next = &int_node2};
    t_list *int_head = &int_node1;
    ft_lstiter(int_head, print_content);

	printf("\nTest 6:\n");
	Student student3 = {.id = 3, .name = "Alice"};
	Student student2 = {.id = 2, .name = "Bob"};
	Student student1 = {.id = 1, .name = "Charlie"};
	t_list student_node3 = {.content = &student3, .next = NULL};
	t_list student_node2 = {.content = &student2, .next = &student_node3};
	t_list student_node1 = {.content = &student1, .next = &student_node2};
	t_list *student_head = &student_node1;

	ft_lstiter(student_head, print_student);

	printf("\nTest 7:\n");
	float float_data[] = {3.14, 2.718, 1.618};
	t_list float_node3 = {.content = &float_data[2], .next = NULL};
	t_list float_node2 = {.content = &float_data[1], .next = &float_node3};
	t_list float_node1 = {.content = &float_data[0], .next = &float_node2};
	t_list *float_head = &float_node1;

	ft_lstiter(float_head, print_float);

	printf("\nTest 8:\n");
	char *strings[] = {"Hello", "world", "from", "ft_lstiter", NULL};
	t_list string_node4 = {.content = strings[3], .next = NULL};
	t_list string_node3 = {.content = strings[2], .next = &string_node4};
	t_list string_node2 = {.content = strings[1], .next = &string_node3};
	t_list string_node1 = {.content = strings[0], .next = &string_node2};
	t_list *string_head = &string_node1;

	ft_lstiter(string_head, print_content);

	printf("\nTest 9:\n");
	int integer = 42;
	char character = 'A';
	float floating = 3.14159;
	void *mixed_data[] = {&integer, &character, &floating};
	t_list mixed_node3 = {.content = mixed_data[2], .next = NULL};
	t_list mixed_node2 = {.content = mixed_data[1], .next = &mixed_node3};
	t_list mixed_node1 = {.content = mixed_data[0], .next = &mixed_node2};
	t_list *mixed_head = &mixed_node1;

	ft_lstiter(mixed_head, print_mixed);

	printf("\nTest 10:\n");
	t_list *large_list = NULL;
	for (int i = 9; i >= 0; i--) {
   		t_list *node = malloc(sizeof(t_list));
    	node->content = (void *)(intptr_t)i;
    	node->next = large_list;
    	large_list = node;
	}

	ft_lstiter(large_list, print_content);

    return 0;
}
*/

#include "../libft.h"
#include <stdio.h>
#include <string.h>

static int	g_failures;
static int	g_tests;

#define CHECK(desc, cond) do { \
		g_tests++; \
		if (!(cond)) \
		{ \
			g_failures++; \
			printf("FAIL: %s\n", desc); \
		} \
	} while (0)

static char	upper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

static void	star(unsigned int i, char *c)
{
	(void)i;
	*c = '*';
}

static void	*dup_content(void *content)
{
	return (content);
}

static void	noop_del(void *content)
{
	(void)content;
}

static void	test_part1(void)
{
	char	buf[32];

	CHECK("isalpha", ft_isalpha('a') == 1 && ft_isalpha('1') == 0);
	CHECK("isdigit", ft_isdigit('5') == 1 && ft_isdigit('x') == 0);
	CHECK("isalnum", ft_isalnum('9') == 1 && ft_isalnum('!') == 0);
	CHECK("isascii", ft_isascii(65) == 1 && ft_isascii(200) == 0);
	CHECK("isprint", ft_isprint(' ') == 1 && ft_isprint(1) == 0);
	CHECK("strlen", ft_strlen("hello") == 5);
	ft_memset(buf, 'x', 5);
	buf[5] = '\0';
	CHECK("memset", strcmp(buf, "xxxxx") == 0);
	ft_bzero(buf, 5);
	CHECK("bzero", buf[0] == 0 && buf[4] == 0);
	CHECK("memcpy", (ft_memcpy(buf, "abc", 4), strcmp(buf, "abc") == 0));
	CHECK("memmove", (ft_memmove(buf, "def", 4), strcmp(buf, "def") == 0));
	strcpy(buf, "hello");
	ft_strlcpy(buf, "hi", sizeof(buf));
	CHECK("strlcpy", strcmp(buf, "hi") == 0);
	ft_strlcat(buf, "!", sizeof(buf));
	CHECK("strlcat", strcmp(buf, "hi!") == 0);
	CHECK("toupper", ft_toupper('a') == 'A');
	CHECK("tolower", ft_tolower('A') == 'a');
	CHECK("strchr", ft_strchr("hello", 'l') == strchr("hello", 'l'));
	CHECK("strrchr", ft_strrchr("hello", 'l') == strrchr("hello", 'l'));
	CHECK("strncmp", ft_strncmp("abc", "abd", 3) == strncmp("abc", "abd", 3));
	CHECK("memchr", ft_memchr("hello", 'l', 5) == memchr("hello", 'l', 5));
	CHECK("memcmp", ft_memcmp("abc", "abd", 3) == memcmp("abc", "abd", 3));
	CHECK("strnstr", ft_strnstr("hello world", "world", 20)
		== strchr("hello world", 'w'));
	CHECK("atoi", ft_atoi("   -42") == -42);
}

static void	test_part1_alloc(void)
{
	void	*p;
	char	*s;

	p = ft_calloc(4, sizeof(char));
	CHECK("calloc", p != NULL
		&& ((char *)p)[0] == 0 && ((char *)p)[3] == 0);
	free(p);
	s = ft_strdup("hello");
	CHECK("strdup", s != NULL && strcmp(s, "hello") == 0);
	free(s);
}

static void	test_part2(void)
{
	char	*s;
	char	**split;

	s = ft_substr("hello world", 6, 5);
	CHECK("substr", strcmp(s, "world") == 0);
	free(s);
	s = ft_strjoin("foo", "bar");
	CHECK("strjoin", strcmp(s, "foobar") == 0);
	free(s);
	s = ft_strtrim("  hello  ", " ");
	CHECK("strtrim", strcmp(s, "hello") == 0);
	free(s);
	split = ft_split("a,,b,c", ',');
	CHECK("split", split != NULL && strcmp(split[0], "a") == 0
		&& strcmp(split[1], "b") == 0 && strcmp(split[2], "c") == 0
		&& split[3] == NULL);
	free(split[0]);
	free(split[1]);
	free(split[2]);
	free(split);
	s = ft_itoa(-2147483648);
	CHECK("itoa", strcmp(s, "-2147483648") == 0);
	free(s);
	s = ft_strmapi("abc", upper);
	CHECK("strmapi", strcmp(s, "ABC") == 0);
	free(s);
	s = ft_strdup("abc");
	ft_striteri(s, star);
	CHECK("striteri", strcmp(s, "***") == 0);
	free(s);
}

static void	test_part3(void)
{
	t_list	*lst;
	t_list	*mapped;
	int		a;
	int		b;

	a = 1;
	b = 2;
	lst = ft_lstnew(&a);
	ft_lstadd_back(&lst, ft_lstnew(&b));
	CHECK("lstnew/lstadd_back", ft_lstsize(lst) == 2);
	CHECK("lstlast", ft_lstlast(lst)->content == &b);
	ft_lstadd_front(&lst, ft_lstnew(&b));
	CHECK("lstadd_front", ft_lstsize(lst) == 3);
	mapped = ft_lstmap(lst, dup_content, noop_del);
	CHECK("lstmap", mapped != NULL && ft_lstsize(mapped) == 3);
	ft_lstclear(&mapped, noop_del);
	CHECK("lstclear", mapped == NULL);
	ft_lstclear(&lst, noop_del);
	CHECK("lstclear2", lst == NULL);
}

int	main(void)
{
	test_part1();
	test_part1_alloc();
	test_part2();
	test_part3();
	printf("%d/%d tests passed\n", g_tests - g_failures, g_tests);
	if (g_failures)
		return (1);
	return (0);
}

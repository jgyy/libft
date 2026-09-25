#include "libft.h"

static size_t	nbrlen(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n <= -10 || n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	nb = n;
	len = nbrlen(nb);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len-- > (size_t)(n < 0))
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

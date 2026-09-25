#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	size_t	i;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

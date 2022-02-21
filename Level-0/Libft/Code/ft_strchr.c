#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	j;

	j = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return (0);
}

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sr;
	int		i;

	if ((!s || !f))
		return (0);
	i = 0;
	sr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sr)
		return (0);
	while (s[i])
	{
		sr[i] = (*f)(i, s[i]);
		i++;
	}
	sr[i] = '\0';
	return (sr);
}

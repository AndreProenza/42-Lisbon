#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while ((*s11 || *s22) && n > 0)
	{
		if (*s11 != *s22)
		{
			return (*s11 - *s22);
		}
		n--;
		s11++;
		s22++;
	}
	return (0);
}

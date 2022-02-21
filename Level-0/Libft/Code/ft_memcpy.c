#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i++ < n && d != s)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

// int main(void)
// {
// 	char	src[50] = "daniggrande";
// 	char	dest[50];
// 	printf("%s", ft_memcpy(dest, src, 6));
// 	return (0);
// }

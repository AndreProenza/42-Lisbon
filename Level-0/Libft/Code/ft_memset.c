#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[50];
// 	strcpy(str, "This is string.h library function");
// 	puts(str);
// 	ft_memset(str, '%', 1);
// 	puts(str);
// 	return (0);
// }

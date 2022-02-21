#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	len -= 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
// int	main(void)
// {
// 	char s[] = "daniel sequeira";
// 	ft_strrev(s);
// 	printf("%s\n", s);
// 	return (0);
// }

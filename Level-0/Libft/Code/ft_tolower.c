#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	else
		return (c);
}

//-------------------------------------------------
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char c;

//     c = 'M';
//     printf("tolower: %c -> %c", c, tolower(c));
// 	printf("\nft_tolower: %c -> %c", c, ft_tolower(c));

//     c = '9';
//     printf("\ntolower: %c -> %c", c, tolower(c));
// 	printf("\nft_tolower: %c -> %c", c, ft_tolower(c));

//     c = 'm';
//     printf("\ntolower: %c -> %c", c, tolower(c));
// 	printf("\nft_tolower: %c -> %c\n", c, ft_tolower(c));

//     return 0;
// }
//-------------------------------------------------

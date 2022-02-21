#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}

//-------------------------------------------------
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    c = 'm';
    printf("toupper: %c -> %c", c, toupper(c));
	printf("\nft_toupper: %c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\ntoupper: %c -> %c", c, toupper(c));
	printf("\nft_toupper: %c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\ntoupper: %c -> %c", c, toupper(c));
	printf("\nft_toupper: %c -> %c\n", c, ft_toupper(c));

    return 0;
}
//-------------------------------------------------
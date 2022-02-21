#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	if (lst)
	{
		if (*lst)
			ft_lstlast(*lst)->next = n;
		else
			*lst = n;
	}
}

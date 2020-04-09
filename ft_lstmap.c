#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	new_list = tmp;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if ((tmp->next = f(lst)) == NULL)
		{
			free(tmp->next);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (new_list);
}
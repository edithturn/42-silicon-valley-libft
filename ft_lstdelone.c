#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list *new_node;

    new_node = *alst;
    del(new_node->content, new_node->content_size);
    free(*alst);
    *alst = NULL;
}
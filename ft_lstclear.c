#include "libft.h"

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;
    t_list *current;

    if (lst == NULL || del == NULL)
        return ;
    current = *lst;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        del(temp->content);
        free(temp);
    }
    *lst = NULL;
}
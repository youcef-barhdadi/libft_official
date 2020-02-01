#include "../libft.h"
#include <stdio.h>


int main()
{
    t_dlist *list = ft_dlstnew(ft_dlstelemnew("hello"));
    ft_dlstpush(list, ft_dlstelemnew("how"));
    ft_dlstpush(list, ft_dlstelemnew("how are"));
    ft_dlstpush(list, ft_dlstelemnew("you"));
    ft_dlstpush(list, ft_dlstelemnew("?"));
    t_dlstelment *elem = list->head;

    while (elem)
    {
        printf("%s\n", (char *)elem->data);
        elem = elem->next;
    }



     elem = list->head;


    while (elem)
    {
        printf("%s\n", (char *)elem->data);
        elem = elem->next;

    }
    return 0;
}
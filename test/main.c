#include "../libft.h"
#include <stdio.h>
# include <errno.h>
int ft_isfile(char *filename);
int main(int argc, char **argv)
{
/*    t_dlist *list = ft_dlstnew(ft_dlstelemnew("hello"));
    ft_dlstpush(list, ft_dlstelemnew("how"));
    ft_dlstpush(list, ft_dlstelemnew("how are"));
    ft_dlstpush(list, ft_dlstelemnew("you"));
    ft_dlstpush(list, ft_dlstelemnew("?"));
   
  
   int elm = ft_dlstexist(list, "", ft);

   printf("(%d)", elm);
*/


	printf("%s\n", ft_createpath(argv[1], argv[2]));
	perror("ee");





    return 0;
}

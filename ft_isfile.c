# include "libft.h"


int ft_isfile(char *filename)
{
	struct stat s;

	if (lstat(filename , &s) != -1) 
	{
		if (S_ISREG(s.st_mode))
			return (1);
	}
	return (0);
}


int ft_isdir(char *filename)
{
	struct stat s;

	if (lstat(filename , &s) != -1) 
	{
		if (S_ISDIR(s.st_mode))
			return (1);
	}
	return (0);
}

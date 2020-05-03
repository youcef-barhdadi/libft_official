# include "libft.h"


char *ft_filename(char *path)
{
	char *last;
	char *ret;

	if (!path)
		return ft_strdup("");
	last = ft_strrchr(path, '/');
	if (!last)
		ret = ft_strdup(path);
	else
		ret = ft_strdup(last + 1);
	return ret;
}

char *ft_createpath(char *base, char *filename)
{
	size_t size;
	char *slash;
	char *path;
	size = ft_strlen(base);
	if (!base || base[0] == 0 || !filename)
		return ft_strdup("");

	if (base[size -1] == '/')
		slash = ft_strdup(base);
	else
		slash = ft_strjoin(base, "/");
	path = ft_strjoin(slash, filename);

	free(slash);
	return path;
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarhdad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:17:48 by ybarhdad          #+#    #+#             */
/*   Updated: 2019/11/04 16:22:04 by ybarhdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *b, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isalnum(int c);
int					ft_iswhitespace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_strncpy(char *dst, char const *src, size_t len);
char				*ft_itoa(int nbr);
int					*ft_strcontaines(char const *s, char c);
char				*ft_strnstr(const char *hystack,
					const char *needle, size_t len);
char				*ft_strstr(const char *haystack, const char *needle);
int					ft_atoi(char const *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putendl_fd(char *str, int fd);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(void *content);
void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
char				*ft_lltoa(long long nbr);
char				*ft_lltoa_base(long long nbr, char *basechar);
#endif

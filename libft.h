/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:04:33 by banthony          #+#    #+#             */
/*   Updated: 2016/09/21 19:28:55 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <dirent.h>
# include "get_next_line.h"

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
long				ft_atol(const char *str);
long long			ft_atoll(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_close(int fd);
int					ft_closedir(DIR *dir);
void				ft_exit(char *exit_msg, int status);
void				ft_freetab(char **tab);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
char				*ft_ltoa(long n);
char				*ft_lltoa(long long n);
/*
** DEBUT commentaire sur fonction et coup de jeune au code
*/
void				ft_strjoin_replace(char *dest, char *src);
char				**ft_tabadd(char **tab, char *elmt);
int					ft_tablen(char **tab);
int					**ft_newmap(int line, int col);
char				*ft_strtrim2(char const *s);
int					ft_open_rdly(char *file);
char				**ft_tabdup(char **tab);
void				ft_printtab(char **tab,
								void (*f)(const char *s), char *str);;
char				**ft_newtab(int line, int col, int c);
t_list				*ft_lstlast(t_list *begin_list);
size_t				ft_lstlen(t_list *begin_list);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstaddback(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(long long nb);
void				ft_putnbrendl(int nb);
void				ft_putnbrspace(int nb);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
void				ft_putnbrspace_fd(int nb, int fd);
void				ft_putnbrendl_fd(int nb, int fd);
void				ft_putspace(char const *s);
void				ft_putspace_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strdup(const char *s1);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				**ft_strsplit(char const *s, char c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
#endif

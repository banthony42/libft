/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:04:33 by banthony          #+#    #+#             */
/*   Updated: 2019/10/30 12:26:49 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <dirent.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdint.h>
# include <unistd.h>
# include "get_next_line.h"

# define SH_WHITE "\033[0m"
# define SH_BLACK "\033[30m"
# define SH_RED "\033[31m"
# define SH_GREEN "\033[32m"
# define SH_YELLOW "\033[33m"
# define SH_BLUE "\033[34m"
# define SH_PINK "\033[35m"
# define SH_CYAN "\033[36m"
# define SH_GREY "\033[37m"

# define SH_BWHITE "\033[40m"
# define SH_BRED "\033[41m"
# define SH_BGREEN "\033[42m"
# define SH_BYELLOW "\033[43m"
# define SH_BBLUE "\033[44m"
# define SH_BPINK "\033[45m"
# define SH_BCYAN "\033[46m"
# define SH_BGREY "\033[47m"

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** DEBUT Fonctions revue et ajout de commentaires
*/

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
char				*ft_itoa_base_uint32(uint32_t value, int base);
char				*ft_itoa_base_uint64(uint64_t value, int base);
void				ft_print_ptr(void const *addr);
void				*ft_memjoin(void *dst, void *src, size_t dst_size,
								size_t src_size);
void				ft_memjoin_replace(void **dst, void *src, size_t *dst_size,
								size_t src_size);
/*
** FIN Fonctions revue et ajout de commentaires
*/

void				ft_putchar_base(unsigned char c, unsigned int base,
									char *tab);
void				ft_print_memory(void *addr, size_t size);
void				ft_putendlcol(char *color, char *str);
void				ft_putstrcol(char *color, char *str);
void				ft_putstrcol_fd(char const *s, int fd, char *color);
int					ft_rgbtohexa(const int red, const int green
								, const int blue);
int					ft_tabtolst(char **tab, t_list **lst);
char				*ft_itoa_base(int value, int base);
char				*ft_strfill(char *str, char c);
char				**ft_tabtrim(char **tab);
void				ft_strjoin_replace(char **dest, char *src);
char				**ft_tabadd(char **tab, char *elmt);
size_t				ft_tablen(char **tab);
int					**ft_newmap(int line, int col);
char				*ft_strtrim2(char const *s, int c);
int					ft_lstat(char *path, struct stat *s_stat);
int					ft_openfile(const char *file, int oflag);
void				ft_opendir(DIR **folder, const char *path);
char				**ft_tabdup(char **tab);
void				ft_printtab(char **tab,
								void (*f)(const char *s), char *str);
char				**ft_newtab_deprecated(int line, int col, int c);
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
void				ft_putchar(char const c);
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

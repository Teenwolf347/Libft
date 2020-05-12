/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:04:29 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/10 13:25:57 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
int					ft_isalnum(int symbol);
int					ft_isalpha(int symbol);
int					ft_isascii(int symbol);
int					ft_isdigit(int symbol);
int					ft_isprint(int symbol);
int					ft_memcmp(const void *str1, const void *str2, size_t s);
int					ft_strncmp(const char *str1, const char *str2, size_t s);
int					ft_toupper(int symbol);
int					ft_tolower(int symbol);
int					ft_lstsize(t_list *lst);
void				ft_bzero(void *str, size_t size);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memccpy(void *dst, const void *str, int v, size_t s);
void				*ft_memchr(void *str, int val, size_t size);
void				*ft_memcpy(void *dst, const void *str, size_t size);
void				*ft_memmove(void *dst, const void *str, size_t size);
void				*ft_memset(void *str, int val, size_t size);
void				*ft_strdup(const char *str);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
char				*ft_strchr(const char *str, int val);
char				*ft_strnstr(const char *s1, const char *s2, size_t s);
char				*ft_strrchr(const char *str, int val);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_itoa(int n);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
size_t				ft_strlcat(char *dst, const char *str, size_t size);
size_t				ft_strlcpy(char *dst, const char *str, size_t size);
size_t				ft_strlen(const char *str);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));

#endif

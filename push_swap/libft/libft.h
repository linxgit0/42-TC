/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:33:45 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/13 21:34:10 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *dest, int c, size_t count);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t count);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_atoi(const char *c);
char				*ft_strdup(const char *s);
void				*ft_calloc(size_t count, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strchr(const char *s, int c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
char				**ft_split(char const *str, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(int n);
int					ft_memcmp(const void *pointer1, const void *pointer2,
						size_t size);
void				*ft_memchr(const void *memoryBlock, int searchedChar,
						size_t size);
char				*ft_strnstr(const char *str, const char *to_find,
						size_t len);
int					ft_strncmp(const char *first, const char *second,
						size_t length);
char				*ft_strrchr(const char *string, int search);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putendl_fd(char *s, int fd);
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstadd_back(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(void *content);
void				ft_lstclear(t_list **lst, void (*del)(void *));
t_list				*ft_lstlast(t_list *lst);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new);

#endif
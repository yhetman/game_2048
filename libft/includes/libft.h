/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:39:33 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 15:23:07 by anyvchyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdbool.h>
# include <errno.h>
# include <string.h>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define PURPLE		"\033[35m"
# define CYAN		"\033[36m"
# define EOC		"\033[0m"

# define BUFF_SIZE	128

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}					t_color;

int					ft_display(char *argv);
int					ft_rgb_to_int(t_color color);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void(*f)(t_list *elem));
void				ft_lstdel(t_list **alst, void(*del)(void*, size_t));
void				ft_lstdelone(t_list **alst, void(*del)(void *, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstsort(t_list *lst, int (*cmp)(int, int));
int					ft_putchar(char c);
int					ft_putstr(const char *str);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
int					ft_find_whitespaces(char ch);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(char const *s, char c);
int					ft_putchar_fd(char c, int fd);
int					ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strcat(char *dest, const char *srce);
char				*ft_strncat(char *restrict str1,
					const char *restrict str2, size_t n);
char				*ft_strrev(const char *s);
size_t				ft_strnlen(const char *s, size_t max_len);
size_t				ft_strlcat(char *restrict dest, const char *restrict srce,
					size_t size);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *destination,
					const void *source, size_t n);
void				*ft_memset(void *b, int c, size_t n);
int					ft_isalpha(int ch);
int					ft_isprint(int ch);
int					ft_isdigit(int ch);
int					ft_isascii(int ch);
int					ft_isalnum(int ch);
int					ft_tolower(int ch);
int					ft_toupper(int ch);
int					*ft_range(int first, int last);
void				ft_swap(int *a, int *b);
int					ft_strerr(char *str);
int					get_next_line(const int fd, char **line);
int					ft_putwchar(wchar_t w);
int					ft_wtoi_p1(wchar_t w, int fd);
int					ft_wtoi_p2(wchar_t w, int fd);
int					ft_wtoi_p3(wchar_t w, int fd);
int					ft_wtoi_p4(wchar_t w, int fd);
int					ft_putwstr(wchar_t *wstr);
wchar_t				*ft_wstrsub(wchar_t const *s,
					unsigned int begin, size_t len);
wchar_t				*ft_wstrncpy(wchar_t *dest, const wchar_t *src, size_t n);
int					ft_put_uint_base(unsigned int numb, char *base);
char				*ft_utoa_base(unsigned int numb, char *base);
int					ft_ulen_base(unsigned int nbr, int base);
int					ft_put_uintmax_base(uintmax_t n, char *b);
char				*ft_uintmax_base_toa(uintmax_t n, char *b);
void				ft_put_uintmax(uintmax_t n);
int					ft_umaxlen_base(uintmax_t n, int base);
int					ft_imaxlen_base(intmax_t n, int base);
size_t				ft_wstrlen(unsigned *s);
size_t				ft_wcharlen(unsigned wc);
double				ft_pow(double n, int power);
int					ft_strchri(char *str, int ch, int i);
int					ft_strchri_lu(char *str, int ch, int i);
int					ft_numblength(int number);
int					ft_sqrt(int number);

# define LEN(x)					ft_strlen(x)
# define NLEN(x, y)				ft_strnlen(x, y)

# define MAX(a, b)				b & ((a - b) >> 31) | a & (~(a - b) >> 31)
# define MIN(a, b)				a & ((a - b) >> 31) | b & (~(a - b) >> 31)
# define ABS(x)					((x < 0) ? -x : x)
# define DABS(a)				(a < 0.0f) ? -a : a
# define POW(x)					((x) * (x))
# define AVERAGE(x, y)			(((x) + (y)) / 2.0)
# define STRERR					strerror

# define IS_ASCII(c)			(!(c >> 7))
# define IS_BLANK(c)			(c == ' ' || c == '\t')
# define IS_DIGIT(c)			((unsigned int)(c - '0') < 10)
# define IS_GRAPH(c)			((unsigned int)(c - '!') < 94)
# define IS_LOWER(c)			((unsigned int)(c - 'a') < 26)
# define IS_PRINT(c)			((unsigned int)(c - ' ') < 95)
# define IS_CNTRL(c)			(!IS_PRINT(c))
# define IS_UPPER(c)			((unsigned int)(c - 'A') < 26)
# define IS_ALPHA(c)			(IS_LOWER(c) || IS_UPPER(c))
# define IS_ALNUM(c)			(IS_ALPHA(c) || IS_DIGIT(c))
# define IS_PUNCT(c)			(IS_PRINT(c) && !FT_ISALNUM(c) && c != ' ')
# define IS_SPACE(c)			((unsigned int)(c - '\t') < 5)

# define TO_ASCII(c)			(c & 0x7F)
# define TO_LOWER(c)			(IS_UPPER(c) ? c + ' ' : c)
# define TO_UPPER(c)			(IS_LOWER(c) ? c - ' ' : c)

# define SET_BIT(val, plc)		(val | (1 << plc))
# define CLEAR_BIT(val, plc)	(val & (~(1 << plc)))
# define TOGGLE_BIT(val, plc)	(val ^ (1 << plc))
# define GET_BIT(val, plc)		((val >> plc) & 1)
# define GET_MSB(val, datatype)	GET_BIT(val, (sizeof(datatype) * 4 - 1))
# define GET_LSB(val)			GET_BIT(val, 0)

#endif

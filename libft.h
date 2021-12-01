/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:21:18 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/12 05:31:46 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<string.h>
# include<stdlib.h>

int		ft_isalpha(int str);
int		ft_isalnum(int c);
int		ft_isdigit(int str);
int		ft_isascii( int c);
int		ft_isprint( int c);
int		ft_toupper( int c);
int		ft_tolower( int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c );
int		ft_strncmp(const char *s1, const char *s2, size_t count);
int		ft_strncmp(const char *s1, const char *s2, size_t count);
int		ft_memcmp(const void *s1, const void *s2, size_t count);
char	*ft_strnstr(const char *str, const char *dst, size_t count);
int		ft_atoi(const char *s);
void	*ft_memchr(void *str, int c, size_t count);
size_t	ft_strlen( const char *str);
void	*ft_memset(void *str, int c, size_t count);
void	ft_bzero(void *str, size_t count);
void	*ft_memcpy( void *str, const void *dst, size_t count);
void	*ft_memmove(void *src, const void *dst, size_t count);
size_t	ft_strlcpy(char *src, const char *dst, size_t count);
size_t	ft_strlcat(char *src, const char *dst, size_t count);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strdup(const char *src );
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
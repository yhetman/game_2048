/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:31:41 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/29 19:31:42 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = -1;
	if ((!(s)) || (!(f)))
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}

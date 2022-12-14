/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:14:44 by emajuri           #+#    #+#             */
/*   Updated: 2022/11/01 14:18:01 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*s != 0)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if ((char)c == 0)
		p = (char *)s;
	if (*p == (char)c)
		return (p);
	return (0);
}

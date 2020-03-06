/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktevot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:50:29 by ktevot            #+#    #+#             */
/*   Updated: 2019/09/08 18:36:24 by ktevot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		longueur(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = longueur(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

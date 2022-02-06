/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:12:04 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/25 21:46:44 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if ((src == 0) || (src == 0 && dest == 0))
	{
		return (0);
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (nb != 0))
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char str1[100] = "abd" ;
	char str2[100];

	printf("###%s###",ft_strncat(str1, str2, 4));
	
}*/

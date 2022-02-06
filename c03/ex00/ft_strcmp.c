/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:48:27 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/27 14:05:10 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
int main(void)
{
	int i;
	char *str1 = "1234";
	char *str2 = "1234";

	i = ft_strcmp(str1, str2);
	printf("i == %d\n",i);
	if (i == 1)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
}*/

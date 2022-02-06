/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:44:31 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/20 23:57:14 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	int flag;
	char s[] = "bAc1def";

	flag = ft_str_is_alpha(s);
	if (flag == 1)
		printf("Low alph\n");
else
		printf("not LowAlph\n");
}*/

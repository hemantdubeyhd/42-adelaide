/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:45:08 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/23 22:12:12 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 32 || *str > 126))
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

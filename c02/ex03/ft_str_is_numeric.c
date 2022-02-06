/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:37:09 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/20 22:38:39 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0' || *str > '9'))
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
	char s[] = "012345";

	flag = ft_str_is_alpha(s);
	if (flag == 1)
		printf("digits\n");
else
		printf("not digit\n");
}*/

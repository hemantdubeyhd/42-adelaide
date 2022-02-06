/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:50:50 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/27 15:06:50 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char	*ft_strlowcase(char *str)
{
	char	*ch;

	ch = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (ch);
}
int main(void)
{
	char source[] = "VICTOR the winner!!";
	printf("%s\n",  ft_strlowcase(source));
    //return 0;
}

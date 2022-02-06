/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:47:32 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/20 23:49:15 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strupcase(char *str)
{
	char	*ch;

	ch = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32 ;
		}
		str++;
	}
	return (ch);
}
/*
int main(void)
{
	char source[] = "Victor the winner!!";
	printf("%s\n",  ft_strupcase(source));
    //return 0;
}*/

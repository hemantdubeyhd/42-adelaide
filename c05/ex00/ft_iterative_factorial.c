/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 02:33:14 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/30 15:49:48 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	facto ;

	facto = 0;
	if (nb < 0)
	{
		return (0);
	}
	facto = 1;
	while (nb > 1)
	{
		facto = facto * nb;
		nb--;
	}
	return (facto);
}

int main(void)
{
	printf("factorail = %d\n",ft_iterative_factorial(0));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:43:17 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 15:05:14 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

void	ft_is_negative(int n);

int	main(void)
{
	puts("N Case");
	ft_is_negative(-1);
	ft_is_negative(-10);
	ft_is_negative(-2);
	ft_is_negative(INT_MIN);
	puts("\nP Case");
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(10);
	ft_is_negative(INT_MAX);
	putchar('\n');
}

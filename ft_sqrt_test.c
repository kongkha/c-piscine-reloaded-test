/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:21:01 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 15:30:30 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <limits.h>

int	ft_sqrt(int nb);

int	main(void)
{
	assert(ft_sqrt(INT_MIN) == 0);
	assert(ft_sqrt(-1) == 0);
	assert(ft_sqrt(0) == 0);
	assert(ft_sqrt(1) == 1);
	assert(ft_sqrt(2) == 0);
	assert(ft_sqrt(3) == 0);
	assert(ft_sqrt(4) == 2);
	assert(ft_sqrt(16) == 4);
	assert(ft_sqrt(25) == 5);
	assert(ft_sqrt(1491) == 0);
	assert(ft_sqrt(1024) == 32);
}

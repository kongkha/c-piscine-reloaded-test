/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:20:22 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 15:08:46 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <limits.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	assert(ft_iterative_factorial(INT_MIN) == 0);
	assert(ft_iterative_factorial(-2) == 0);
	assert(ft_iterative_factorial(-1) == 0);
	assert(ft_iterative_factorial(0) == 1);
	assert(ft_iterative_factorial(1) == 1);
	assert(ft_iterative_factorial(2) == 2);
	assert(ft_iterative_factorial(3) == 6);
	assert(ft_iterative_factorial(4) == 24);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:11:40 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 18:48:08 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdlib.h>
#include <limits.h>

int	*ft_range(int min, int max);

int	ft_range_check(int *nums, int min, int max)
{
	while (min < max)
	{
		if (*nums != min)
			return (*nums - min);
		++nums;
		++min;
	}
	return (0);
}

int	main(void)
{
	int	*nums;

	nums = ft_range(-3, 2);
	assert(!ft_range_check(nums, -3, 2));
	free(nums);
	assert(!ft_range(-1, -1));
	assert(!ft_range(0, 0));
	assert(!ft_range(1, 1));
	assert(!ft_range(5, -5));
	assert(!ft_range(5, -3));
	nums = ft_range(INT_MAX - 3, INT_MAX);
	assert(!ft_range_check(nums, INT_MAX - 3, INT_MAX));
	free(nums);
	assert(!ft_range(INT_MIN + 3, INT_MIN));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:53:18 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 14:55:43 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	assert(a == 2);
	assert(b == 1);
}

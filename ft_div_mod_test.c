/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:55:10 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 14:58:03 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 12;
	ft_div_mod(a, b, &div, &mod);
	assert(div == a / b);
	assert(mod == a % b);
}

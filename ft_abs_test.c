/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:02:02 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/26 16:34:28 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <limits.h>
#include "ft_abs.h"
#include "ft_abs.h"
#include "ft_abs.h"

int	main(void)
{
	assert(ABS(12) == 12);
	assert(ABS(-12) == 12);
	assert(ABS(0) == 0);
	assert(ABS(-1) == 1);
	assert(ABS(1000) == 1000);
	assert(ABS(-1000) == 1000);
}

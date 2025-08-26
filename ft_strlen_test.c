/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:32:53 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 15:36:50 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int	ft_strlen(char *str);

int	main(void)
{
	assert(ft_strlen("assert") == 6);
	assert(ft_strlen("ioai1ri8s") == 9);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("fiji jo8uar8u9a8 a3ru9jar3 ") == 27);
	assert(ft_strlen("a") == 1);
}

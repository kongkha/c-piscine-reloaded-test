/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:36:24 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 16:47:29 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	assert(ft_strcmp("a", "a") == 0);
	assert(ft_strcmp("a", "b") == -1);
	assert(ft_strcmp("a", "ac") == -99);
	assert(ft_strcmp("ac", "a") == 99);
	assert(ft_strcmp("b", "a") == 1);
	assert(ft_strcmp("ABC", "ABC") == 0);
	assert(ft_strcmp("ABC", "AB") == 67);
	assert(ft_strcmp("ABA", "ABZ") == -25);
	assert(ft_strcmp("ABJ", "ABC") == 7);
	assert(ft_strcmp("abc\n", "abc") == 10);
	assert(ft_strcmp("abc", "abc") == 0);
}

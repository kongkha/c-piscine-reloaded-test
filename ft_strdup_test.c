/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:52:00 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 18:22:09 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;
	char	*str_d;

	str = "jfoaosfjiajf";
	str_d = ft_strdup(str);
	assert(!strcmp(str, str_d));
	free(str_d);
	str = "aijosgis";
	str_d = ft_strdup(str);
	assert(!strcmp(str, str_d));
	assert(strcmp(str_d, "fajoafioe"));
	free(str_d);
}

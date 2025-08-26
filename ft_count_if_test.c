/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 09:53:48 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/26 10:26:01 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdlib.h>
#include <string.h>

int	ft_count_if(char **tab, int (*f)(char *));

int	ft_check(char *str)
{
	return (!strcmp(str, "Kawaii desune"));
}

int	main(void)
{
	char			*tab[24];
	char			str[14];
	char			str_alt[1];
	unsigned long	i;

	i = 0;
	strcpy(str, "Kawaii desune");
	*str_alt = '\0';
	while (i < sizeof(tab) / sizeof(*tab) / sizeof(**tab) - 1)
	{
		if (!(i % 2))
			tab[i] = str;
		else
			tab[i] = str_alt;
		++i;
	}
	tab[i] = NULL;
	assert(ft_count_if(tab, &ft_check)
		== sizeof(tab) / sizeof(*tab) / sizeof(**tab) / 2);
}

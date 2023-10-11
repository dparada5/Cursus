/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:38:01 by dparada           #+#    #+#             */
/*   Updated: 2023/10/09 11:29:17 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	array[20];
	size_t	n = 5;

	ft_bzero(array, n);
	printf("%s\n", array);
	printf("a\n");
	printf("%s\n", bzero(array, n));
	return (0);
}*/
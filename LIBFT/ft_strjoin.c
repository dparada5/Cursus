/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:39:13 by dparada           #+#    #+#             */
/*   Updated: 2023/09/29 11:21:53 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ptr = (char *) malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char const	*str1 = "Hola ";
	char const	*str2 = "buen dia";
	
	printf("%s\n", ft_strjoin(str1, str2));
}*/
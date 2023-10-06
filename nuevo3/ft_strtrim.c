/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:00:18 by dparada           #+#    #+#             */
/*   Updated: 2023/10/02 10:29:12 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1[start])
		return (ft_strdup(""));
	while (ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]))
		end--;
	ptr = ft_substr(s1, start, ((end - start) + 1));
	return (ptr);
}

/*int	main(void)
{
	char const	*str1 = "  fthsrth   ";
	char const	*str2 = " h ";

	printf("%s\n", ft_strtrim(str1, str2));
	return (0);
}*/

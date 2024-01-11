/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colores_julia.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/11 16:42:21 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int32_t	coloresuno(int iters)
{
	int	r;
	int	g;
	int	b;
	int	i;

	i = 0;
	r = 255;
	g = 0;
	b = 0;
	while (i <= iters && (r <= 255 && g <= 255 && b <= 255))
	{
		r += 0;
		g += 10;
		b += 10;
		i += 1;
	}
	return (get_color(r, g, b, 255));
}

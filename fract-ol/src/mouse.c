/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/29 15:20:58 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	ft_mousepos(void *param)
{
	int32_t		x;
	int32_t		y;
	t_fractol	*info;

	info = param;
	if (info->active == 1 && info->set == 2)
	{
		mlx_get_mouse_pos(info->mlx, &x, &y);
		info->c_r = ft_esc((double)x, info->min_real, info->max_real, \
		WIDTH);
		info->c_i = ft_esc((double)y, info->min_imag, info->max_imag, \
		HEIGHT);
	}
	printf_fractal(info);
}

void	ft_scrollhook(double xdelta, double ydelta, void *param)
{
	t_fractol	*info;

	info = param;
	xdelta = 0;
	if (ydelta > 0)
		info->zoom *= 0.65;
	else if (ydelta < 0)
		info->zoom *= 1.05;
	printf_fractal(info);
}

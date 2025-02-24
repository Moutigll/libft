/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_put_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 23:07:26 by ele-lean          #+#    #+#             */
/*   Updated: 2025/02/24 17:52:00 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	clear_mlx_font(t_mlx_font *font)
{
	free_tab((void **)font->letters);
	free(font->letters_str);
	free(font->path);
	mlx_destroy_image(font->mlx, font->font->img);
	free(font->font);
	free(font);
}

static void	draw_scaled_pixel(t_mlx_font *font, int x, int y, int align)
{
	int		k;
	int		l;
	int		pixel_index;

	k = 0;
	while (k < font->font_size)
	{
		l = 0;
		while (l < font->font_size)
		{
			pixel_index = (y + k + (align * font->font_size))
				* font->screen->size_line + (x + l) * (font->screen->bpp / 8);
			*(unsigned int *)(font->screen->addr + pixel_index) = font->color;
			l++;
		}
		k++;
	}
}

static void	put_rect(t_mlx_font *font, t_mlx_letter *letter, int x, int y)
{
	int		i;
	int		j;
	int		font_pixel_index;

	i = 0;
	while (i < letter->end_x - letter->start_x)
	{
		j = 0;
		while (j < letter->end_y - letter->start_y)
		{
			font_pixel_index = (letter->start_y + j) * font->font->size_line
				+ (letter->start_x + i) * (font->font->bpp / 8);
			if (*(unsigned char *)(font->font->addr + font_pixel_index + 3)
				== 0x000000)
				draw_scaled_pixel(font, x + i
					* font->font_size, y + j * font->font_size, letter->align);
			j++;
		}
		i++;
	}
}

int	ft_mlx_put_string(t_mlx_font *font, char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			x += font->space_width * font->font_size;
		j = 0;
		while (font->letters_str[j])
		{
			if (str[i] == font->letters_str[j])
			{
				put_rect(font, font->letters + j, x, y);
				x += (font->letters[j].end_x - font->letters[j].start_x)
					* font->font_size + font->letter_spacing;
				break ;
			}
			j++;
		}
		i++;
	}
	return (x);
}

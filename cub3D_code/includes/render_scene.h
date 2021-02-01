/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_scene.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:06:13 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/01 18:31:39 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_SCENE_H
# define RENDER_SCENE_H

# include "cub3d.h"

void	render_scene(t_scene *scene);
void	create_window(t_mlx *mlx);
int		render_next_frame(void *my_struct);

#endif

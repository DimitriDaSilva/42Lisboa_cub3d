/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:06:13 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/09 12:05:03 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_GAME_H
# define RENDER_GAME_H

# include "cub3d.h"

void	create_window(t_game *game);
void	set_event_hooks(t_game *game);
int		render_next_frame(void *my_struct);
void	update(t_game *game);
void	draw(t_game *game);

#endif


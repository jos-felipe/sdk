/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a0_.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:13:41 by josfelip          #+#    #+#             */
/*   Updated: 2025/01/24 14:45:57 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ch0_.h"

int	check_file_extension(char *file_path, char *ext)
{
	char	*tail;
	size_t	len;

	len = ft_strlen(file_path);
	if (len <= ft_strlen(ext))
		return (1);
	tail = file_path + len - ft_strlen(ext);
	return (ft_strncmp(tail, ext, ft_strlen(ext)));
}

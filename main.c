/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:11:26 by josfelip          #+#    #+#             */
/*   Updated: 2024/06/26 13:43:25 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/newproject.h"

int	main(void)
{
	char	*str;
	
	str = ft_strdup("Hello World!\n");
	ft_collect_mem(str);
	new_function(str);
	ft_free_trashman(ft_get_mem_address());
	return (0);
}
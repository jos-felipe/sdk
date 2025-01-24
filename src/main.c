/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:11:26 by josfelip          #+#    #+#             */
/*   Updated: 2025/01/24 14:49:53 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ch0_.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	ft_printf("Hello, World!\n");
	ft_printf("ninja.txt extension check .txt: %d\n", check_file_extension("ninja.txt", ".txt"));
	ft_printf("ninja.txt extension check .png: %d\n", check_file_extension("ninja.txt", ".png"));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:55:25 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/18 21:19:59 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
#include <fcntl.h>   // Para macros de control de archivo (por ejemplo,
	O_WRONLY, O_CREAT)
#include <stdio.h>
#include <unistd.h>  // Para la función write

int	main(void)
{
	int		fd;
	char	*str;

	// Abrir un archivo para escritura
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	// Cadena de ejemplo
	str = "Hola, mundo!";
	// Llamar a ft_putendl_fd para escribir la cadena en el archivo
	ft_putendl_fd(str, fd);
	// Cerrar el archivo
	close(fd);
	return (0);
}
*/
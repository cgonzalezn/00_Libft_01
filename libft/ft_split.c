/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:05:26 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/18 11:40:51 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_words(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c && in_word)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*get_next_word(const char *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static void	ft_allocate(char **result, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = get_next_word(s, c);
			if (!result[i])
			{
				free_words(result);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;

	i = 0;
	if (!s || !c)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	ft_allocate(result, s, c);
	return (result);
}
/*
#include <stdio.h>
#include "libft.h"

void	print_str_array(char **str_array)
{
	int i = 0;
	while (str_array[i])
	{
		printf("%s\n", str_array[i]);
		i++;
	}
}

int	main(void)
{
	char *str = "Hello,world,this,is,a,test";
	char **result = ft_split(str, ',');

	if (result)
	{
		print_str_array(result);
		// Output:
		// Hello
		// world,this,is,a,test
	}
	else
	{
		printf("Error: Memory allocation failed.\n");
	}

	// Liberar memoria
	int i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);

	return 0;
}
*/
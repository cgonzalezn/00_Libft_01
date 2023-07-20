#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

int	main(void)
{
	int		option;
	char	ch;

	printf("Enter function you want to test: ");
	scanf("%d", &option);
	getchar(); // Consume the newline character left in the input buffer
	switch (option)
	{
	case 1:
		printf("Testing ft_isalpha\n");
		printf("Enter a character: ");
		scanf("%c", &ch);
		if (ft_isalpha(ch))
		{
			printf("'%c' is alpha.\n", ch);
		}
		else
		{
			printf("'%c' is not alpha.\n", ch);
		}
		break ;
	case 2:
		printf("Testing ft_isdigit\n");
		printf("Enter a character: ");
		scanf("%c", &ch);
		if (ft_isdigit(ch))
		{
			printf("The character '%c' is a numeric digit.\n", ch);
		}
		else
		{
			printf("The character '%c' is not a numeric digit.\n", ch);
		}
		break ;
	case 3:
		printf("Testing ft_isalnum\n");
		printf("Enter a character: ");
		scanf("%c", &ch);
		if (ft_isalnum(ch))
		{
			printf("The character '%c' is an alphanumeric character.\n", ch);
		}
		else
		{
			printf("The character '%c' is not an alphanumeric character.\n",
				ch);
		}
		break ;
	case 4:
		printf("Testing ft_isalpha\n");
		printf("Enter a character: ");
		scanf("%c", &ch);
		if (ft_isalpha(ch))
		{
			printf("'%c' is alpha.\n", ch);
		}
		else
		{
			printf("'%c' is not alpha.\n", ch);
		}
		break ;
	case 5:
		printf("Testing ft_isdigit\n");
		printf("Enter a character: ");
		scanf("%c", &ch);
		if (ft_isdigit(ch))
		{
			printf("The character '%c' is a numeric digit.\n", ch);
		}
		else
		{
			printf("The character '%c' is not a numeric digit.\n", ch);
		}
		break ;
	case 6:
		printf("Testing ft_isalnum\n");
		printf("Enter a character: ");
		scanf("%c", &ch);
		if (ft_isalnum(ch))
		{
			printf("The character '%c' is an alphanumeric character.\n", ch);
		}
		else
		{
			printf("The character '%c' is not an alphanumeric character.\n",
				ch);
		}
		break ;
	default:
		printf("Invalid option.\n");
		break ;
	}
	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Agregar esta línea para incluir la biblioteca <string.h>
#include "libft.h"

// Prototipos de funciones adicionales para el case 29
char addOneToChar(unsigned int i, char c);

// Prototipo de función adicional para el case 30
void printCharWithIndex(unsigned int i, char *c);

int main(void)
{
	int option;
	char ch;

	char str1[100]; // Se asume que las cadenas de entrada no serán mayores de 100 caracteres
	char set[100];
	char str[100]; // Se asume que las cadenas de entrada no serán mayores de 100 caracteres
	char str2[100];
	char substr[100]; // Se asume que la subcadena de entrada no será mayor de 100 caracteres
	char dst[100];	  // Se asume que la cadena de destino no será mayor de 100 caracteres
	char src[100];	  // Se asume que la cadena de origen no será mayor de 100 caracteres

	char **splitResult;
	char *result;
	char *subStr;
	char *dest;
	char *dupStr;

	size_t numElements, elementSize;
	size_t numBytes;

	int n;
	int start, length;
	int result_int; // esta es para las funciones 17 a la 21

	char *pos;
	char *rpos;

	printf("Enter function you want to test:\n");
	printf("1. ft_isalpha\n");
	printf("2. ft_isdigit\n");
	printf("3. ft_isalnum\n");
	printf("4. ft_isascii\n");
	printf("5. ft_isprint\n");
	printf("6. ft_strlen\n");
	printf("7. ft_memset\n");
	printf("8. ft_bzero\n");
	printf("9. ft_memcpy\n");
	printf("10. ft_memmove\n");
	printf("11. ft_strlcpy\n");
	printf("12. ft_strlcat\n");
	printf("13. ft_toupper\n");
	printf("14. ft_tolower\n");
	printf("15. ft_strchr\n");
	printf("16. ft_strrchr\n");
	printf("17. ft_strncmp\n");
	printf("18. ft_memchr\n");
	printf("19. ft_memcmp\n");
	printf("20. ft_strnstr\n");
	printf("21. ft_atoi\n");
	printf("22. ft_calloc\n");
	printf("23. ft_strdup\n");
	printf("24. ft_substr\n");
	printf("25. ft_strjoin\n");
	printf("26. ft_strtrim\n");
	printf("27. ft_split\n");
	printf("28. ft_itoa\n");
	printf("29. ft_strmapi\n");
	printf("30. ft_striteri\n");
	printf("31. ft_putchar_fd\n");

	scanf("%d", &option);
	getchar(); // Consume the newline character left in the input buffer

	switch (option)
	{
	case 1:
		printf("Testing ft_isalpha\n");
		printf("Enter a character: ");
		scanf(" %c", &ch);
		if (ft_isalpha(ch))
		{
			printf("'%c' is an alphabetic character.\n", ch);
		}
		else
		{
			printf("'%c' is not an alphabetic character.\n", ch);
		}
		break;
	case 2:
		printf("Testing ft_isdigit\n");
		printf("Enter a character: ");
		scanf(" %c", &ch);
		if (ft_isdigit(ch))
		{
			printf("'%c' is a digit.\n", ch);
		}
		else
		{
			printf("'%c' is not a digit.\n", ch);
		}
		break;
	case 3:
		printf("Testing ft_isalnum\n");
		printf("Enter a character: ");
		scanf(" %c", &ch);
		if (ft_isalnum(ch))
		{
			printf("'%c' is an alphanumeric character.\n", ch);
		}
		else
		{
			printf("'%c' is not an alphanumeric character.\n", ch);
		}
		break;
	case 4:
		printf("Testing ft_isascii\n");
		printf("Enter a character: ");
		scanf(" %c", &ch);
		if (ft_isascii(ch))
		{
			printf("'%c' is a valid ASCII character.\n", ch);
		}
		else
		{
			printf("'%c' is not a valid ASCII character.\n", ch);
		}
		break;
	case 5:
		printf("Testing ft_isprint\n");
		printf("Enter a character: ");
		scanf(" %c", &ch);
		if (ft_isprint(ch))
		{
			printf("'%c' is a printable character.\n", ch);
		}
		else
		{
			printf("'%c' is not a printable character.\n", ch);
		}
		break;
	case 6:
		printf("Testing ft_strlen\n");
		printf("Enter a string: ");
		scanf("%s", str);
		printf("Length of the string: %zu\n", ft_strlen(str));
		break;
	case 7:
		printf("Testing ft_memset\n");
		printf("Enter a string: ");
		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the character to fill with: ");
		scanf("%c", &ch);
		getchar(); // Consume the newline character left in the input buffer

		printf("Enter the number of bytes to fill: ");
		scanf("%zu", &numBytes);

		ft_memset(str, ch, numBytes);
		printf("Resulting string after memset: %s\n", str);
		break;
	case 8:
		printf("Testing ft_bzero\n");
		printf("Enter a string: ");
		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the number of bytes to zero: ");
		scanf("%zu", &numBytes);

		ft_bzero(str, numBytes);
		printf("Resulting string after bzero: %s\n", str);
		break;
	case 9:
		printf("Testing ft_memcpy\n");
		printf("Enter the source string: ");
		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the destination string: ");
		fgets(dst, sizeof(dst), stdin);
		dst[strcspn(dst, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the number of bytes to copy: ");
		scanf("%zu", &numBytes);

		ft_memcpy(dst, str, numBytes);
		printf("Resulting destination string after memcpy: %s\n", dst);
		break;
	case 10:
		printf("Testing ft_memmove\n");
		printf("Enter the source string: ");
		fgets(src, sizeof(src), stdin);
		src[strcspn(src, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the destination string: ");
		fgets(dst, sizeof(dst), stdin);
		dst[strcspn(dst, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the number of bytes to move: ");
		scanf("%zu", &numBytes);

		ft_memmove(dst, src, numBytes);
		printf("Resulting destination string after memmove: %s\n", dst);
		break;
	case 11:
		printf("Testing ft_strlcpy\n");
		printf("Enter the source string: ");
		fgets(src, sizeof(src), stdin);
		src[strcspn(src, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the destination string: ");
		fgets(dst, sizeof(dst), stdin);
		dst[strcspn(dst, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the size of the destination buffer: ");
		scanf("%zu", &numBytes);

		size_t len = ft_strlcpy(dst, src, numBytes);
		printf("Resulting destination string after strlcpy: %s\n", dst);
		printf("Length of the copied string: %zu\n", len);
		break;
	case 12:
		printf("Testing ft_strlcat\n");
		printf("Enter the source string: ");
		fgets(src, sizeof(src), stdin);
		src[strcspn(src, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the destination string: ");
		fgets(dst, sizeof(dst), stdin);
		dst[strcspn(dst, "\n")] = '\0'; // Eliminar el salto de línea capturado por fgets

		printf("Enter the size of the destination buffer: ");
		scanf("%zu", &numBytes);

		size_t totalLen = ft_strlcat(dst, src, numBytes);
		printf("Resulting destination string after strlcat: %s\n", dst);
		printf("Total length after concatenation: %zu\n", totalLen);
		break;
	case 13:
		printf("Testing ft_toupper\n");
		printf("Enter a character: ");
		scanf("%c", &ch);

		ch = ft_toupper(ch);
		printf("Uppercase character: %c\n", ch);
		break;
	case 14:
		printf("Testing ft_tolower\n");
		printf("Enter a character: ");
		scanf("%c", &ch);

		ch = ft_tolower(ch);
		printf("Lowercase character: %c\n", ch);
		break;
	case 15:
		printf("Testing ft_strchr\n");
		printf("Enter a string: ");
		scanf("%s", str);

		printf("Enter the character to search for: ");
		getchar(); // Consume the newline character left in the input buffer
		scanf("%c", &ch);

		pos = ft_strchr(str, ch);
		if (pos != NULL)
		{
			printf("Character '%c' found at position: %ld\n", ch, pos - str);
		}
		else
		{
			printf("Character '%c' not found in the string.\n", ch);
		}
		break;
	case 16:
		printf("Testing ft_strrchr\n");
		printf("Enter a string: ");
		scanf("%s", str);

		printf("Enter the character to search for: ");
		getchar(); // Consume the newline character left in the input buffer
		scanf("%c", &ch);

		rpos = ft_strrchr(str, ch);
		if (rpos != NULL)
		{
			printf("Last occurrence of character '%c' found at position: %ld\n", ch, rpos - str);
		}
		else
		{
			printf("Character '%c' not found in the string.\n", ch);
		}
		break;
	case 17:
		printf("Testing ft_strncmp\n");
		printf("Enter the first string: ");
		scanf("%s", str);

		printf("Enter the second string: ");
		scanf("%s", substr);

		printf("Enter the number of characters to compare: ");
		scanf("%zu", &numBytes);

		result_int = ft_strncmp(str, substr, numBytes);
		printf("Comparison result: %d\n", result_int);
		break;
	case 18:
		printf("Testing ft_memchr\n");
		printf("Enter a string: ");
		scanf("%s", str);

		printf("Enter the character to search for: ");
		getchar(); // Consume the newline character left in the input buffer
		scanf("%c", &ch);

		void *pos = ft_memchr(str, ch, strlen(str));
		if (pos != NULL)
		{
			printf("Character '%c' found at position: %ld\n", ch, (char *)pos - str);
		}
		else
		{
			printf("Character '%c' not found in the string.\n", ch);
		}
		break;
	case 19:
		printf("Testing ft_memcmp\n");
		printf("Enter the first string: ");
		scanf("%s", str);

		printf("Enter the second string: ");
		scanf("%s", substr);

		printf("Enter the number of characters to compare: ");
		scanf("%zu", &numBytes);

		result_int = ft_memcmp(str, substr, numBytes);
		if (result_int == 0)
		{
			printf("The first %zu characters of the strings are identical.\n", numBytes);
		}
		else if (result_int > 0)
		{
			printf("The first differing character in the first string has a greater value.\n");
		}
		else
		{
			printf("The first differing character in the first string has a smaller value.\n");
		}
		break;
	case 20:
		printf("Testing ft_strnstr\n");
		printf("Enter the main string: ");
		scanf("%s", str);

		printf("Enter the substring to search for: ");
		scanf("%s", substr);

		printf("Enter the maximum number of characters to search: ");
		scanf("%zu", &numBytes);

		char *position = ft_strnstr(str, substr, numBytes);
		if (position != NULL)
		{
			printf("Substring found at position: %ld\n", position - str);
		}
		else
		{
			printf("Substring not found in the main string.\n");
		}
		break;
	case 21:
		printf("Testing ft_atoi\n");
		printf("Enter a string representing an integer: ");
		scanf("%s", str);

		int num = ft_atoi(str);
		printf("Converted integer value: %d\n", num);
		break;
	case 22:
		printf("Testing ft_calloc\n");
		printf("Enter the number of elements: ");
		scanf("%zu", &numElements);

		printf("Enter the size of each element: ");
		scanf("%zu", &elementSize);

		dest = ft_calloc(numElements, elementSize);
		if (dest != NULL)
		{
			printf("Memory allocated successfully.\n");
			// Hacer algo con la memoria asignada, si es necesario
			free(dest); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;
	case 23:
		printf("Testing ft_strdup\n");
		printf("Enter a string: ");
		scanf("%s", str);

		dupStr = ft_strdup(str);
		if (dupStr != NULL)
		{
			printf("Original string: %s\n", str);
			printf("Duplicated string: %s\n", dupStr);
			free(dupStr); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;
	case 24:
		printf("Testing ft_substr\n");
		printf("Enter a string: ");
		scanf("%s", str);

		printf("Enter the starting index for the substring: ");
		scanf("%d", &start);

		printf("Enter the length of the substring: ");
		scanf("%d", &length);

		subStr = ft_substr(str, start, length);
		if (subStr != NULL)
		{
			printf("Original string: %s\n", str);
			printf("Substring: %s\n", subStr);
			free(subStr); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;
	case 25:
		printf("Testing ft_strjoin\n");
		printf("Enter the first string: ");
		scanf("%s", str1);

		printf("Enter the second string: ");
		scanf("%s", str2);

		result = ft_strjoin(str1, str2);
		if (result != NULL)
		{
			printf("Concatenated string: %s\n", result);
			free(result); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;
	case 26:
		printf("Testing ft_strtrim\n");
		printf("Enter the string: ");
		scanf("%s", str1);

		printf("Enter the set of characters to trim: ");
		scanf("%s", set);

		result = ft_strtrim(str1, set);
		if (result != NULL)
		{
			printf("Original string: %s\n", str1);
			printf("Trimmed string: %s\n", result);
			free(result); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;
	case 27:
		printf("Testing ft_split\n");
		printf("Enter the string: ");
		scanf("%s", str);

		printf("Enter the character to split the string: ");
		scanf(" %c", &ch); // Se añade un espacio antes de %c para ignorar los espacios en blanco

		splitResult = ft_split(str, ch);
		if (splitResult != NULL)
		{
			printf("Original string: %s\n", str);
			printf("Split result:\n");
			for (int i = 0; splitResult[i] != NULL; i++)
			{
				printf("%s\n", splitResult[i]);
				free(splitResult[i]); // No olvides liberar la memoria asignada
			}
			free(splitResult); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;
	case 28:
		printf("Testing ft_itoa\n");
		printf("Enter an integer: ");
		scanf("%d", &n);

		result = ft_itoa(n);
		if (result != NULL)
		{
			printf("Integer: %d\n", n);
			printf("String: %s\n", result);
			free(result); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;
	case 29:
		printf("Testing ft_strmapi\n");
		printf("Enter the string: ");
		scanf("%s", str);

		// Aplicamos la función addOneToChar a cada caracter de la cadena
		char *mappedStr = ft_strmapi(str, addOneToChar);
		if (mappedStr != NULL)
		{
			printf("Original string: %s\n", str);
			printf("Mapped string: %s\n", mappedStr);
			free(mappedStr); // No olvides liberar la memoria asignada
		}
		else
		{
			printf("Memory allocation failed.\n");
		}
		break;

	case 30:
		printf("Testing ft_striteri\n");
		printf("Enter the string: ");
		scanf("%s", str);

		// Aplicamos la función printCharWithIndex a cada caracter de la cadena
		ft_striteri(str, printCharWithIndex);
		break;

	case 31:
		printf("Testing ft_putchar_fd\n");
		printf("Enter a character: ");
		scanf(" %c", &ch);	 // Se añade un espacio antes de %c para ignorar los espacios en blanco
		ft_putchar_fd(ch, 1); // Imprime el caracter en la consola
		break;

	default:
		printf("Invalid option.\n");
		break;
	}
	return 0;
}

// Definición de la función addOneToChar (case 29)
char addOneToChar(unsigned int i, char c)
{
	return c + 1;
}

// Definición de la función printCharWithIndex (case 30)
void printCharWithIndex(unsigned int i, char *c)
{
	printf("Character at index %u: %c\n", i, *c);
}

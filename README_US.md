# Libft

# 42's Common Core Libft

- [ft_isalpha](#ft_isalpha) Checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper || islower(c)).
- [ft_isdigit](#ft_isdigit) Checks for a digit (0 through 9).
- [ft_isalnum](#ft_isalnum) Checks for an alphabetic character; it is equivalent to (isalpha(c) || isdigit(c)).
- [ft_isascii](#ft_isascii) Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
- [ft_isprint](#ft_isprint) VChecks for any printable character except space.
- [ft_strlen](#ft_strlen) Function calculates the lenght of the string pointed to by s, excluding the terminating null byte ('\0'). Return value: Function returns the number of bytes in the string pointed to by s.
- [ft_memset](#ft_memset) Function fills the first n bytes of the memory area pointed to by s, with the constant byte c. 
Return value: Function returns a pointer to memory area s.
- [ft_bzero](#ft_bzero) Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area. Return value: None.
- [ft_memcpy](#ft_memcpy) Function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. Use memmove if the memory areas do overlap. Return value: Pointer to dest.
- [ft_memmove](#ft_memmove) Function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest. Return value: Function returns a pointer to dest.
- [ft_strlcpy](#ft_strlcpy) Function copy strings up to size - 1 characters from the NUL-terminated string src to dst. Guarantee to NUL-terminate the result (as long as size is larger than 0). Note that a byte for the NUL should be included in size. Only operate on true "C" strings. That means that src must be NUL-terminated. Return value: The length of src (size_t).
- [ft_strlcat](#ft_strlcat) Function appends the NUL-terminated string src to the end of dst. Will append at most size - strlen(dst) - 1 bytes. Guarantee to NUL-terminate the result (as long as size is larger than 0 and as long as there is at least one byte free is dst). Note that a byte for the NUL should be included in size. Only operates on true "C" strings. That means that both src and dst must be NUL-terminated. Return values: For sucessful concatenation: size_t src + dst.
- [ft_toupper](#ft_toupper) If c is an lowercase letter, returns its uppercase equivalent, if a uppercase representation exists in the current locale. Otherwise returns c.
- [ft_tolower](#ft_tolower) If c is an uppercase letter, returns its lowercase equivalent, if a lowercase representation exists in the current locale. Otherwise returns c.
- [ft_strchr](#ft_strchr) Function returns a pointer to the first occurrence of the character c in the string s.
Return value: Pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
- [ft_strrchr](#ft_strrchr) Function returns a pointer to the last occurrence of the caracter c in the string s.
Return Values: Pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
- [ft_strncmp](#ft_strncmp) Function compares the first (at most) n bytes of s1 and s2. The locale is not taken into account. The comparison is done using unsigned characters. Return value: Function return an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.
- [ft_memchr](#ft_memchr) The function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char. Return value: Pointer to matching type to the matching byte or NULL of the character does not occur in the given memory area.
- [ft_memcmp](#ft_memcmp) Function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2. Return value: Function returns an integer less than, equal to, or than greater zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. For a non-zero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ is s1 and s2. If n is zero, the return value is zero.
- [ft_strnstr](#ft_strnstr) Function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a '\0' character are not searched. Return value: If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.
- [ft_atoi](#ft_atoi) Converts the initial portion of the string pointed to by nptr to int. Return value: Converted Value or 0 on error.

### ---------- MALLOC() ----------

- [ft_calloc](#ft_calloc) The calloc() function in C is used for dynamic memory allocation, specifically designed to allocate memory for an array of elements. It differs from malloc() primarily in two key aspects: Initialization to Zero: calloc() initializes all bytes of the allocated memory block to zero. This is a crucial feature, particularly when working with data structures where initial zero values are expected or required. In contrast, malloc() does not initialize the allocated memory, leaving its contents indeterminate (often referred to as "garbage values"). 
- [ft_strdup](#ft_strdup) Its purpose is to duplicate a given string by allocating new memory for the copy and then copying the contents of the original string into this newly allocated space.

### ---------- Extra Functions ----------

- [ft_substr](#ft_substr) Allocates memory (using malloc(3)) and returns a substring from the string ’s’. The substring starts at index ’start’ and has a maximum length of ’len’.
- [ft_strjoin](#ft_strjoin) Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating ’s1’ and ’s2’.
- [ft_strtrin](#ft_strtrim) Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end.
- [ft_split](#ft_split) Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
- [ft_itoa](#ft_itoa) Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
- [ft_strmapi](#ft_strmapi) Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to store the results from the successive applications of f.
- [ft_striteri](#ft_striteri) Applies the function ’f’ to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to ’f’ so it can be modified if necessary.
- [ft_putchar_fd](#ft_putchar_fd) Outputs the character ’c’ to the specified file descriptor.
- [ft_putstr_fd](#ft_putstr_fd) Outputs the string ’s’ to the specified file descriptor.
- [ft_putendl_fd](#ft_putendl_fd) Outputs the string ’s’ to the specified file descriptor followed by a newline.
- [ft_putnbr_fd](#ft_putnbr_fd) Outputs the integer ’n’ to the specified file descriptor.

### ---------- Bonus Functions ----------

##### ---------- Struct ----------
	typedef struct	s_list
	{
		void		*content;
		struct s_list	*next;
	}		t_list;

- [ft_lstnew](#ft_lstnew) Allocates memory (using malloc(3)) and returns a new node. The ’content’ member variable is initialized with the given parameter ’content’. The variable ’next’ is initialized to NULL.
- [ft_lstadd_front](#ft_lstadd_front) Adds the node ’new’ at the beginning of the list. 
- [ft_lstsize](#ft_lstsize)Counts the number of nodes in the list.
- [ft_lstlast](#ft_lstlast) Returns the last node of the list.
- [ft_lstadd_back](#ft_lstadd_back) Adds the node ’new’ at the end of the list.
- [ft_lstdelone](#ft_lstdelone) Takes a node as parameter and frees its content using the function ’del’. Free the node itself but does NOT free the next node. 
- [ft_lstclear](#ft_lstclear) Deletes and frees the given node and all its successors, using the function ’del’ and free(3). Finally, set the pointer to the list to NULL.
- [ft_lstiter](#ft_lstiter) Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.
- [ft_lstmap](#ft_lstmap) Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.

### ---------- Testes  ----------

# ft_isalpha

#include <stdio.h>

int	main(void)
{
	printf("ft_isalpha\n");	
	printf("L retorna %i\n", ft_isalpha('L'));
	printf("€ retorna %d\n", ft_isalpha(0xA4));
	printf("@ retorna %i\n", ft_isalpha('@'));
	printf("n retorna %i\n", ft_isalpha('n'));
	printf(") retorna %i\n", ft_isalpha(')'));
	printf("r retorna %i\n", ft_isalpha('r'));
	printf("0 retorna %i\n", ft_isalpha('0'));
	printf("Tab retorna %i\n", ft_isalpha('	'));
	return (0);
}
	
# ft_isdigit

#include <stdio.h>

int	main(void)
{
	printf("ft_isdigit\n");	
	printf("ft_isdigit: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isdigit('L'));
	printf("€ retorna %d\n", ft_isdigit(0xA4));
	printf("@ retorna %i\n", ft_isdigit('@'));
	printf("n retorna %i\n", ft_isdigit('n'));
	printf(") retorna %i\n", ft_isdigit(')'));
	printf("r retorna %i\n", ft_isdigit('r'));
	printf("0 retorna %i\n", ft_isdigit('0'));
	printf("Tab retorna %i\n", ft_isdigit('	'));
	return (0);
}
	
# ft_isalnum

#include <stdio.h>

int	main(void)
{
	printf("ft_isalnum: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isalnum('L'));
	printf("€ retorna %d\n", ft_isalnum(0xA4));
	printf("@ retorna %i\n", ft_isalnum('@'));
	printf("n retorna %i\n", ft_isalnum('n'));
	printf(") retorna %i\n", ft_isalnum(')'));
	printf("r retorna %i\n", ft_isalnum('r'));
	printf("0 retorna %i\n", ft_isalnum('0'));
	printf("Tab retorna %i\n", ft_isalnum('	'));
	return (0);
}
	
# ft_isascii

#include <stdio.h>

int	main(void)
{
	printf("ft_isascii: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isascii('L'));
	printf("€ retorna %d\n", ft_isascii(0xA4));
	printf("@ retorna %i\n", ft_isascii('@'));
	printf("n retorna %i\n", ft_isascii('n'));
	printf(") retorna %i\n", ft_isascii(')'));
	printf("r retorna %i\n", ft_isascii('r'));
	printf("0 retorna %i\n", ft_isascii('0'));
	printf("Tab retorna %i\n", ft_isascii('	'));
	return (0);
}

# ft_isprint

#include <stdio.h>

int	main(void)
{
	printf("ft_isprint: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isprint('L'));
	printf("€ retorna %d\n", ft_isprint(0xA4));
	printf("@ retorna %i\n", ft_isprint('@'));
	printf("n retorna %i\n", ft_isprint('n'));
	printf(") retorna %i\n", ft_isprint(')'));
	printf("r retorna %i\n", ft_isprint('r'));
	printf("0 retorna %i\n", ft_isprint('0'));
	printf("Tab retorna %i\n", ft_isprint('	'));
	return (0);
}

# ft_strlen

#include <stdio.h>

int	main(void)
{
	printf("Leandro deve retornar 7, retorna %zu\n", ft_strlen("Leandro"));
	printf("L€@n)r0 deve retornar 7, retorna %zu\n", ft_strlen("Leandro"));	    
	return (0);
}

# ft_memset

#include <stdio.h>

int	main(void)
{
	int	ponteiro[5];
	int	index;
	
	printf("sizeof(int)=%li\n", sizeof(int));
	printf("sizeof(men)=%li\n", sizeof(ponteiro));
	printf("sizeof(index)=%li\n", sizeof(index));
	printf("Trocando brancos por 1, retorna\n");
	ft_memset(ponteiro, 1, sizeof(ponteiro));
	index = 0;
	while (index < 1)
		printf("%i\n", ponteiro[index++]);
	return (0);
}

# ft_bzero

#include <stdio.h>

int	main(void)
{
	int	ponteiro[5];
	int	index;

	printf("chama ft_memset para zerar a variavel\n");
	ft_bzero(ponteiro, sizeof(ponteiro));
	index = 0;
	while (index < 1)
		printf("%i\n", ponteiro[index++]);
	return (0)
}
	
# ft_memcpy

#include <stdio.h>

int	main(void)
{
	int	origem[10];
	int	destino[10];
	int	index;
	
	index = 0;
	origem[10] = {1, 2, 3};
	destino[10] = {9, 8, 7};
	printf("ANTES DE CHAMAR FT_MEMCPY\n");
	while (index < 3)
	{
		printf("ORIGEM[%i] : %i\n", index, origem[index]);
		printf("DESTINO[%i]: %i\n", index, destino[index]);
		index++;
	}
	ft_memcpy(destino, origem, 3 * sizeof(int));
	printf("DEPOIS DE CHAMAR FT_MEMCPY\n");
	index = 0;
	while (index < 3)
	{
		printf("ORIGEM[%i] : %i\n", index, origem[index]);
		printf("DESTINO[%i]: %i\n", index, destino[index]);
		index++;
	}
	return (0);
}
	
# ft_memmove

#include <stdio.h>

int     main(void)
{
	char	origem1[]
	char	destino1[]
	char	origem2[]
	char	destino2[]
	char	origem3[]
	char	destino3[]
	char	origem4[]
	char	destino4[]
	char	origem5[]
	char	destino5[]
	char	origem6[]
	char	destino6[]

	origem1[]  = "leandro otsubo";
	destino1[] = "leandro otsubo";
	origem2[]  = "leandro shigueyoshi otsubo";
	destino2[] = "leandro otsubo";
	origem3[]  = "leandro otsubo";
	destino3[] = "leandro shigueyoshi otsubo";
	origem4[]  = "leandro otsubo";
	destino4[] = "leandro otsubo";
	origem5[]  = "leandro shigueyoshi otsubo";
	destino5[] = "leandro otsubo";
	origem6[]  = "leandro otsubo";
	destino6[] = "leandro shigueyoshi otsubo";	
	printf("SIZEOF ORIGEM  1 %lu\n", sizeof(origem1));
	printf("SIZEOF DESTINO 1 %lu\n", sizeof(destino1));
	printf("SIZEOF ORIGEM  2 %lu\n", sizeof(origem2));
	printf("SIZEOF DESTINO 2 %lu\n", sizeof(destino2));
	printf("SIZEOF ORIGEM  3 %lu\n", sizeof(origem3));
	printf("SIZEOF DESTINO 3 %lu\n", sizeof(destino3));
	printf("SIZEOF ORIGEM  4 %lu\n", sizeof(origem4));
	printf("SIZEOF DESTINO 4 %lu\n", sizeof(destino4));
	printf("SIZEOF ORIGEM  5 %lu\n", sizeof(origem5));
	printf("SIZEOF DESTINO 5 %lu\n", sizeof(destino5));
	printf("SIZEOF ORIGEM  6 %lu\n", sizeof(origem6));
	printf("SIZEOF DESTINO 6 %lu\n", sizeof(destino6));
	printf("\n");
	printf("1 - ANTES DE CHAMAR FT_MEMMOVE 1 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem1));
	printf("ORIGEM : %s\n", origem1);
	printf("DESTINO: %s\n", destino1);
	ft_memmove(destino1, origem1, sizeof(origem1));
	printf("\n");
	printf("2 - DEPOIS DE CHAMAR FT_MEMMOVE 1 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem1));
	printf("ORIGEM : %s\n", origem1);
	printf("DESTINO: %s\n", destino1);
	printf("\n");
	printf("3 - ANTES DE CHAMAR FT_MEMMOVE 2 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem2));
	printf("ORIGEM : %s\n", origem2);
	printf("DESTINO: %s\n", destino2);
	ft_memmove(destino2, origem2, sizeof(origem2));
	printf("\n");
	printf("4 - DEPOIS DE CHAMAR FT_MEMMOVE 2 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem2));
	printf("ORIGEM : %s\n", origem2);
	printf("DESTINO: %s\n", destino2);
	printf("\n");
	printf("5 - ANTES DE CHAMAR FT_MEMMOVE 3 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem3));
	printf("ORIGEM : %s\n", origem3);
	printf("DESTINO: %s\n", destino3);
	ft_memmove(destino3, origem3, sizeof(origem3));
	printf("\n");
	printf("6 - DEPOIS DE CHAMAR FT_MEMMOVE 3 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem3));
	printf("ORIGEM : %s\n", origem3);
	printf("DESTINO: %s\n", destino3);
	printf("\n");
	printf("7 - ANTES DE CHAMAR FT_MEMMOVE 4 COM SIZEOF DESTINO %lu\n",
		sizeof(destino4));
	printf("ORIGEM : %s\n", origem4);
	printf("DESTINO: %s\n", destino4);
	ft_memmove(destino4, origem4, sizeof(destino4));
	printf("\n");
	printf("8 - DEPOIS DE CHAMAR FT_MEMMOVE 4 COM SIZEOF DESTINO %lu\n",
		sizeof(destino4));
	printf("ORIGEM : %s\n", origem4);
	printf("DESTINO: %s\n", destino4);
	printf("\n");
	printf("9 - ANTES DE CHAMAR FT_MEMMOVE 5 COM SIZEOF DESTINO %lu\n",
		sizeof(destino5));
	printf("ORIGEM : %s\n", origem5);
	printf("DESTINO: %s\n", destino5);
	ft_memmove(destino5, origem5, sizeof(destino5));
	printf("\n");
	printf("10 - DEPOIS DE CHAMAR FT_MEMMOVE 5 COM SIZEOF DESTINO %lu\n",
		sizeof(destino5));
	printf("ORIGEM : %s\n", origem5);
	printf("DESTINO: %s\n", destino5);
	printf("\n");
	printf("11 - ANTES DE CHAMAR FT_MEMMOVE 6 COM SIZEOF DESTINO %lu\n",
		sizeof(destino6));
	printf("ORIGEM : %s\n", origem6);
	printf("DESTINO: %s\n", destino6);
	ft_memmove(destino6, origem6, sizeof(destino6));
	printf("\n");
	printf("12 - DEPOIS DE CHAMAR FT_MEMMOVE 6 COM SIZEOF DESTINO %lu\n",
		sizeof(destino6));
	printf("ORIGEM : %s\n", origem6);
	printf("DESTINO: %s\n", destino6);
	return (0);
}	

# ft_strlcpy

#include <stdio.h>

int     main(void)
{
	char	origem7[]
	char	destino7[]
	char	origem8[]
	char	destino8[]
	char	origem9[]
	char	destino9[]
	char	origem10[]
	char	destino10[]
	char	origem11[]
	char	destino11[]
	char	origem12[]
	char	destino12[]

	origem7[]  = "leandro otsubo";
	destino7[] = "leandro otsubo";
	origem8[]  = "leandro shigueyoshi otsubo";
	destino8[] = "leandro otsubo";
	origem9[]  = "leandro otsubo";
	destino9[] = "leandro shigueyoshi otsubo";
	origem10[]  = "leandro otsubo";
	destino10[] = "leandro otsubo";
	origem11[]  = "leandro shigueyoshi otsubo";
	destino11[] = "leandro otsubo";
	origem12[]  = "leandro otsubo";
	destino12[] = "leandro shigueyoshi otsubo";	
	printf("1 - ANTES DE CHAMAR ft_strlcpy 7 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem7));
	printf("ORIGEM : %s\n", origem7);
	printf("DESTINO: %s\n", destino7);
	ft_strlcpy(destino7, origem7, sizeof(origem7));
	printf("\n");
	printf("2 - DEPOIS DE CHAMAR ft_strlcpy 7 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem7));
	printf("ORIGEM : %s\n", origem7);
	printf("DESTINO: %s\n", destino7);
	printf("\n");
	printf("3 - ANTES DE CHAMAR ft_strlcpy 8 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem8));
	printf("ORIGEM : %s\n", origem8);
	printf("DESTINO: %s\n", destino8);
	ft_strlcpy(destino8, origem8, sizeof(origem8));
	printf("\n");
	printf("4 - DEPOIS DE CHAMAR ft_strlcpy 8 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem8));
	printf("ORIGEM : %s\n", origem8);
	printf("DESTINO: %s\n", destino8);
	printf("\n");
	printf("5 - ANTES DE CHAMAR ft_strlcpy 9 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem9));
	printf("ORIGEM : %s\n", origem9);
	printf("DESTINO: %s\n", destino9);
	ft_strlcpy(destino9, origem9, sizeof(origem9));
	printf("\n");
	printf("6 - DEPOIS DE CHAMAR ft_strlcpy 9 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem9));
	printf("ORIGEM : %s\n", origem9);
	printf("DESTINO: %s\n", destino9);
	printf("\n");
	printf("7 - ANTES DE CHAMAR ft_strlcpy 10 COM SIZEOF DESTINO %lu\n",
		sizeof(destino10));
	printf("ORIGEM : %s\n", origem10);
	printf("DESTINO: %s\n", destino10);
	ft_strlcpy(destino10, origem10, sizeof(destino10));
	printf("\n");
	printf("8 - DEPOIS DE CHAMAR ft_strlcpy 10 COM SIZEOF DESTINO %lu\n",
		sizeof(destino10));
	printf("ORIGEM : %s\n", origem10);
	printf("DESTINO: %s\n", destino10);
	printf("\n");
	printf("9 - ANTES DE CHAMAR ft_strlcpy 11 COM SIZEOF DESTINO %lu\n",
		sizeof(destino11));
	printf("ORIGEM : %s\n", origem11);
	printf("DESTINO: %s\n", destino11);
	ft_strlcpy(destino11, origem11, sizeof(destino11));
	printf("\n");
	printf("10 - DEPOIS DE CHAMAR ft_strlcpy 11 COM SIZEOF DESTINO %lu\n",
		sizeof(destino11));
	printf("ORIGEM : %s\n", origem11);
	printf("DESTINO: %s\n", destino11);
	printf("\n");
	printf("11 - ANTES DE CHAMAR ft_strlcpy 12 COM SIZEOF DESTINO %lu\n",
		sizeof(destino12));
	printf("ORIGEM : %s\n", origem12);
	printf("DESTINO: %s\n", destino12);
	ft_strlcpy(destino12, origem12, sizeof(destino12));
	printf("\n");
	printf("12 - DEPOIS DE CHAMAR ft_strlcpy 12 COM SIZEOF DESTINO %lu\n",
		sizeof(destino12));
	printf("ORIGEM : %s\n", origem12);
	printf("DESTINO: %s\n", destino12);
	return (0);
}

# ft_strlcat

#include <stdio.h>

int	main(void)
{
	char	origem13[]
	char	destino13[]
	char	origem14[]
	char	destino14[]
	char	origem15[]
	char	destino15[]
	char	origem16[]
	char	destino16[]
	char	origem17[]
	char	destino17[]
	char	origem18[]
	char	destino18[]

	origem13[]  = "leandro otsubo";
	destino13[] = "leandro otsubo";
	origem14[]  = "leandro shigueyoshi otsubo";
	destino14[] = "leandro otsubo";
	origem15[]  = "leandro otsubo";
	destino15[] = "leandro shigueyoshi otsubo";
	origem16[]  = "leandro otsubo";
	destino16[] = "leandro otsubo";
	origem17[]  = "leandro shigueyoshi otsubo";
	destino17[] = "leandro otsubo";
	origem18[]  = "leandro otsubo";
	destino18[] = "leandro shigueyoshi otsubo";
	printf("1 - ANTES DE CHAMAR ft_strlcat 13 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem13));
	printf("ORIGEM : %s\n", origem13);
	printf("DESTINO: %s\n", destino13);
	tamanho = ft_strlcat(destino13, origem13, sizeof(origem13));
	printf("\n");
	printf("2 - DEPOIS DE CHAMAR ft_strlcat 13 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem13));
	printf("ORIGEM : %s\n", origem13);
	printf("DESTINO: %s\n", destino13);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("3 - ANTES DE CHAMAR ft_strlcat 14 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem14));
	printf("ORIGEM : %s\n", origem14);
	printf("DESTINO: %s\n", destino14);
	tamanho = ft_strlcat(destino14, origem14, sizeof(origem14));
	printf("\n");
	printf("4 - DEPOIS DE CHAMAR ft_strlcat 14 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem14));
	printf("ORIGEM : %s\n", origem14);
	printf("DESTINO: %s\n", destino14);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("5 - ANTES DE CHAMAR ft_strlcat 15 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem15));
	printf("ORIGEM : %s\n", origem15);
	printf("DESTINO: %s\n", destino15);
	tamanho = ft_strlcat(destino15, origem15, sizeof(origem15));
	printf("\n");
	printf("6 - DEPOIS DE CHAMAR ft_strlcat 15 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem15));
	printf("ORIGEM : %s\n", origem15);
	printf("DESTINO: %s\n", destino15);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("13 - ANTES DE CHAMAR ft_strlcat 16 COM SIZEOF DESTINO %lu\n",
		sizeof(destino16));
	printf("ORIGEM : %s\n", origem16);
	printf("DESTINO: %s\n", destino16);
	tamanho = ft_strlcat(destino16, origem16, sizeof(destino16));
	printf("\n");
	printf("14 - DEPOIS DE CHAMAR ft_strlcat 16 COM SIZEOF DESTINO %lu\n",
		sizeof(destino16));
	printf("ORIGEM : %s\n", origem16);
	printf("DESTINO: %s\n", destino16);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("15 - ANTES DE CHAMAR ft_strlcat 17 COM SIZEOF DESTINO %lu\n",
		sizeof(destino17));
	printf("ORIGEM : %s\n", origem17);
	printf("DESTINO: %s\n", destino17);
	tamanho = ft_strlcat(destino17, origem17, sizeof(destino17));
	printf("\n");
	printf("16 - DEPOIS#include <stdio.h> DE CHAMAR ft_strlcat 17 COM SIZEOF DESTINO %lu\n",
		sizeof(destino17));
	printf("ORIGEM : %s\n", origem17);
	printf("DESTINO: %s\n", destino17);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("17 - ANTES DE CHAMAR ft_strlcat 18 COM SIZEOF DESTINO %lu\n",
		sizeof(destino18));
	printf("ORIGEM : %s\n", origem18);
	printf("DESTINO: %s\n", destino18);
	tamanho = ft_strlcat(destino18, origem18, sizeof(destino18));
	printf("\n");
	printf("18 - DEPOIS DE CHAMAR ft_strlcat 18 COM SIZEOF DESTINO %lu\n",
		sizeof(destino18));
	printf("ORIGEM : %s\n", origem18);
	printf("DESTINO: %s\n", destino18);
	printf("retorno: %zu\n", tamanho);
	return (0);
}

# ft_toupper

#include <stdio.h>

int	main(void)
{
	printf("l = %c\n", ft_toupper('l'));
	printf("e = %c\n", ft_toupper('e'));
	printf("a = %c\n", ft_toupper('a'));
	printf("n = %c\n", ft_toupper('n'));
	printf("d = %c\n", ft_toupper('d'));
	printf("r = %c\n", ft_toupper('r'));
	printf("o = %c\n", ft_toupper('o'));
}
	
# ft_tolower

#include <stdio.h>

int	main(void)

{
	printf("L = %c\n", ft_tolower('L'));
	printf("E = %c\n", ft_tolower('E'));
	printf("A = %c\n", ft_tolower('A'));
	printf("N = %c\n", ft_tolower('N'));
	printf("D = %c\n", ft_tolower('D'));
	printf("R = %c\n", ft_tolower('R'));
	printf("O = %c\n", ft_tolower('O'));
}
	
# ft_strchr

#include <stdio.h>
	
int	main(void)
{
	printf("ft_strchr(LEANDRO, L) %s\n", ft_strchr("LEANDRO", 'L'));
	printf("ft_strchr(LEANDRO, E) %s\n", ft_strchr("LEANDRO", 'E'));
	printf("ft_strchr(LEANDRO, A) %s\n", ft_strchr("LEANDRO", 'A'));
	printf("ft_strchr(LEANDRO, N) %s\n", ft_strchr("LEANDRO", 'N'));
	printf("ft_strchr(LEANDRO, D) %s\n", ft_strchr("LEANDRO", 'D'));
	printf("ft_strchr(LEANDRO, R) %s\n", ft_strchr("LEANDRO", 'R'));
	printf("ft_strchr(LEANDRO, O) %s\n", ft_strchr("LEANDRO", 'O'));
	printf("ft_strchr(LEANDRO, X) %s\n", ft_strchr("LEANDRO", 'X'));
	printf("ft_strchr(LEANDRO, barra0) %s\n", ft_strchr("LEANDRO", '\0'));
	printf("ft_strchr(barra0, barra0) %s\n", ft_strchr("\0", '\0'));	    
	return (0);
}
	
# ft_strrchr

#include <stdio.h>

int	main(void)
{
	printf("ft_strrchr(LEANDRO, L) %p\n", ft_strrchr("LEANDRO", 'L'));
	printf("ft_strrchr(LEANDRO, E) %p\n", ft_strrchr("LEANDRO", 'E'));
	printf("ft_strrchr(LEANDRO, A) %p\n", ft_strrchr("LEANDRO", 'A'));
	printf("ft_strrchr(LEANDRO, N) %p\n", ft_strrchr("LEANDRO", 'N'));
	printf("ft_strrchr(LEANDRO, D) %p\n", ft_strrchr("LEANDRO", 'D'));
	printf("ft_strrchr(LEANDRO, R) %p\n", ft_strrchr("LEANDRO", 'R'));
	printf("ft_strrchr(LEANDRO, O) %p\n", ft_strrchr("LEANDRO", 'O'));
	printf("ft_strrchr(LEANDRO, X) %p\n", ft_strrchr("LEANDRO", 'X'));
	printf("ft_strrchr(LEANDRO, barra0) %p\n", ft_strrchr("LEANDRO", '\0'));
	printf("ft_strrchr(barra0, barra0) %p\n", ft_strrchr("\0", '\0'));
	return (0);
}

# ft_strncmp

#include <stdio.h>

int	main(void)
{
	printf("ft_strncmp(LEANDRO, leandro) %d\n", ft_strncmp("LEANDRO", "leandro", 3));
	printf("ft_strncmp(leandro, LEANDRO) %d\n", ft_strncmp("leandro", "LEANDRO", 3));
	printf("ft_strncmp(LEANDRO, LEAndro) %d\n", ft_strncmp("LEANDRO", "LEAndro", 3));	    
	return (0);
}

# ft_memchr

#include <stdio.h>

int	main(void)
{	
	char	*nome;
	char	*resultado;
	
	nome = "leandro";
	resultado = ft_memchr(nome, 'l', 7);
	printf("Endereço retornado: %p\n", (void *)resultado);
	if (resultado != NULL)
		printf("String a partir do achado: %s\n", resultado);
	if (resultado != NULL)
		printf("Caractere encontrado: %c\n", *resultado);
	resultado = ft_memchr(nome, 'o', 7);
	printf("Endereço retornado: %p\n", (void *)resultado);
	if (resultado != NULL)
		printf("String a partir do achado: %s\n", resultado);
	if (resultado != NULL)
		printf("Caractere encontrado: %c\n", *resultado);
	resultado = ft_memchr(nome, 'x', 7);
	printf("Endereço retornado: %p\n", (void *)resultado);
	if (resultado != NULL)
		printf("String a partir do achado: %s\n", resultado);
	if (resultado != NULL)
		printf("Caractere encontrado: %c\n", *resultado);
	return (0);
}

# ft_memcmp

#include <stdio.h>

int	main(void)
{	
	const char	*ponteiro1;
	const char	*ponteiro2;
	
	ponteiro1 = "leandro";
	ponteiro2 = "LEANDRO";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	ponteiro1 = "leandro";
	ponteiro2 = "leandro";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	ponteiro1 = "LEANDRO";
	ponteiro2 = "leandro";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	ponteiro1 = "LEANDRO";
	ponteiro2 = "LEANDRO";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	return (0);
}

# ft_strnstr

#include <stdio.h>

int	main(void)
{
	printf("busca \"lea\" em 20 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "lea", 20));
	printf("busca \"ots\" em 11 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "lea", 11));
	printf("busca \"ndr\" em 3 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "ndr", 3));
	printf("busca \"xxx\" em 20 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "xxx", 20));
	return (0);	
}

# ft_atoi

#include <stdio.h>

int	main(void)
{
	printf("\"+42\" return %i\n", ft_atoi("+42"));
	printf("\"-42\" return %i\n", ft_atoi("-42"));
	printf("\"  +42\" return %i\n", ft_atoi("  +42"));
	printf("\"  -42\" return %i\n", ft_atoi("  -42"));
	printf("\" +42\" return %i\n", ft_atoi(" +42"));
	printf("\" -42\" return %i\n", ft_atoi(" -42"));
	printf("\"42\" return %i\n", ft_atoi("42"));
	printf("\" 42\" return %i\n", ft_atoi(" 42"));
	printf("\"42 \" return %i\n", ft_atoi("42 "));
	printf("\"--42\" return %i\n", ft_atoi("--42"));
	printf("\"++42\" return %i\n", ft_atoi("++42"));
	printf("\"A42\" return %i\n", ft_atoi("A42"));	
	return (0);
}

# ft_calloc

#include <stdio.h>

int	main(void)
{
	int	i;
	float	*arr;
	int	str_size;
	char    *test;

	i = 0;
	arr = (float *)ft_calloc(5, sizeof(float));
	printf("Memória alocada e preenchida por zeros:\n");
	while (i < 5)
		printf("%f\n", arr[i++]);
	free(arr);		
	str_size = 10;
	test = (char *)ft_calloc(str_size, sizeof(char));
	if (test != NULL)
		printf("Calloc Allocated!\n");
	else
		printf("Calloc Failled!\n");
	free(test);
	return (0);
}

# ft_strdup

#include <stdio.h>

int	main(void)
{
	char	str[] = "strdup example";
	char 	str2[] = "";

	str[] = "strdup example";
	str2[] = "";
	printf("string address: %p\n", str);
	printf("duplicated string address: %p\n", ft_strdup(str));
	printf("duplicated string value: \"%s\"\n", ft_strdup(str));
	printf("string address: %p\n", str);
	printf("duplicated string address: %p\n", ft_strdup(str2));
	printf("duplicated string value: \"%s\"\n", ft_strdup(str2));
	return (0);	
}

# ft_substr

#include <stdio.h>

int	main(void)
{
	char	*superstr;
	char	*substr;

	superstr = "this is a super string";
	substr = ft_substr(superstr, 5, 10);
	printf("Superstring: %s\n", superstr);
	printf("Substring: %s\n", substr);
	return (0);	
}

# ft_strjoin

#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	
	s1 = "strjoin ";
	s2 = "example";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);	
}

# ft_strtrim

#include <stdio.h>

int	main(void)
{
	char	*s3;
	
	*s3 = "   trim---strtrim example---trim     ";
	printf("Before trim: %s\n", s3);
	printf("After trim: %s\n", ft_strtrim("", ""));
	return (0);	
}

# ft_split

#include <stdio.h>

int	main(void)
{
	char	*str3;
	char	**splitted_str;
	
	str3 = "Cada projeto no Common Core 42 contém uma dica codificada. Para cada\
		círculo, apenas um projeto fornece a dica correta necessária para o\
		círculo seguinte. Este desafio é individual, com um prêmio final para\
		um aluno. Membros da equipe podem participar, mas não são elegíveis para\
		um prêmio. Você está entre os primeiros a resolver um círculo? Envie as dicas\
		com explicações para ol@42.fr\
		para serem adicionadas à tabela de classificação. A\
		dica para este primeiro projeto, que pode conter anagramas, é:\
		Lobo de partículas agentivas que refutam o verde para suas casas,\
		 DNA que vasculha suas fezes";
	i = 0;
	splitted_str = ft_split(str3, ' ');
	if (!splitted_str)
		return (1);
	while (splitted_str[i])
		printf("%s\n", splitted_str[i++]);
	while (*splitted_str)
		free(*splitted_str++);
	return (0);	
}

# ft_itoa

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(2147483647));
	return (0);	
}

# ft_strmapi

#include <stdio.h>

size_t ft_strlen(const char *valor)
{
	size_t	index;

	index = 0;
	while (valor[index])
		index++;
	return (index);
}

char test_func(unsigned int i, char c) 
{
    if (c == ' ')
        return c;
    if (c >= 'a' && c <= 'z')
	    return c - 32;
    else 
        return c + 32;
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	new_str = (char *)malloc(size + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int main(void)
{
    char    *str1 = "tudo em caixa baixa";
    char    *str2 = "TUDO EM CAIXA ALTA";

    printf("STR 1 : %s\n", ft_strmapi(str1, test_func));
    printf("STR 2 : %s\n", ft_strmapi(str2, test_func));
    return (0);
}

# ft_striteri

#include <stdio.h>

void	test_func(unsigned int i, char *c) 
{
	*c += i;
}

int	main(void)
{
	char	*str1 = "0000000000";
	char    *str2 = "1111111111";

	ft_striteri(str1, test_func);
	ft_striteri(str2, test_func);
	printf("STR 1 : %s", str1);
	printf("STR 2 : %s", str2);
	return (0);
}

# ft_putchar_fd

#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putchar_fd('X', fd);
	close(fd);
	return (0);
}

# ft_putstr_fd

#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putstr_fd("ft_pustr_fd example", fd);
	close(fd);
	return (0);
}

# ft_putendl_fd

#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putendl_fd("ft_putendl_fd example", fd);
	close(fd);
	return (0);
}

# ft_putnbr_fd

#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putnbr_fd(-2147483648, fd);
	ft_putnbr_fd(0, fd);
	ft_putnbr_fd(2147483647, fd);
	close(fd);
	return (0);
}

# ft_lstnew

#include <stdio.h>

int	main(void)
{
	t_list	node;
	
	node = *ft_lstnew("ft_lstnew example");
	printf("Content: %s\n", (char *)node.content);
	printf("Next: %p\n", node.next);
	return (0);
}

# ft_lstadd_front

#include <stdio.h>

int	main(void)
{
	t_list  *lst;
	t_list	*new;

	new = ft_lstnew("ft_lstadd_front example");
	lst = ft_lstnew("ft_lstnew example");
	printf("Content before: %s\n", (char *)lst->content);
	printf("Next before: %p\n", lst->next);
	ft_lstadd_front(&lst, new);
	printf("Content after: %s\n", (char *)lst->content);
	printf("Next after: %p\n", lst->next);
	return (0);
}

# ft_lstsize

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node;

	lst = ft_lstnew("ft_lstsize example 1");
	node = ft_lstnew("ft_lstsize example 2");
	ft_lstadd_front(&lst, node);
	printf("List len: %i\n", ft_lstsize(lst));
	return (0);
}

# ft_lstlast

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node;
	t_list	*new;

	lst = ft_lstnew("node 1");
	node = ft_lstnew("node 2");
	new = ft_lstnew("ft_lstadd_back example");
	ft_lstadd_back(&lst, node);
	ft_lstadd_back(&lst, new);
	printf("Last node Content: %s\n", (char *)ft_lstlast(lst)->content);
	printf("Last node Next: %p\n", ft_lstlast(lst)->next);
	return (0);
}

# ft_lstadd_back

#include <stdio.h>

int     main(void)
{
	t_list  *lst;
	t_list  *node;
	t_list  *new;

	lst = ft_lstnew("node 1");
	node = ft_lstnew("node 2");
	new = ft_lstnew("ft_lstadd_back example");
	ft_lstadd_back(&lst, node);
	ft_lstadd_back(&lst, new);
	printf("First node Content: %s\n", (char *)lst->content);
	printf("First node Next: %p\n", lst->next);
	printf("\n");
	printf("Second node Content: %s\n", (char *)lst->next->content);
	printf("Second node Next: %p\n", lst->next->next);
	printf("\n");
	printf("Last node Content: %s\n", (char *)lst->next->next->content);
	printf("Last node Next: %p\n", lst->next->next->next);
	return (0);
}

# ft_lstdelone

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node;
	char	s1[] = "first node";
	char	s2[] = "second node";

	lst = ft_lstnew(s1);
	node = ft_lstnew(s2);
	ft_lstadd_back(&lst, node);
	printf("Before delete: %s\n", (char *)node->content);
	ft_lstdelone(node, del_tester);
	printf("After delete: %p\n", node->next);
}

# ft_lstclear

static void	del_tester(void *content)
{
	ft_bzero(content, ft_strlen((char *)content));
}

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node;
	char	s1[] = "node 1";
	char	s2[] = "node 2";

	lst = ft_lstnew(s1);
	node = ft_lstnew(s2);
	ft_lstadd_back(&lst, node);
	printf("Before clear: %s, %s\n", (char *)lst->content,
		(char *)node->content);
	ft_lstclear(&lst, del_tester);
	printf("After clear: %s, %s\n", (char *)lst->content,
		(char *)node->content);
}

# ft_lstiter

void	lstiter_tester(void *content)
{
	char	*temp;

	temp = (char *)content;
	*temp = ft_toupper(*temp);
}

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node_2;
	t_list	*node_3;
	char    str_1[] = "a";
	char    str_2[] = "b";
	char    str_3[] = "c";

	printf("Antes: %s, %s e %s\n", str_1, str_2, str_3);
	lst = ft_lstnew(str_1);
	node_2 = ft_lstnew(str_2);
	ft_lstadd_back(&lst, node_2);
	node_3 = ft_lstnew(str_3);
	ft_lstadd_back(&lst, node_3);
	ft_lstiter(lst, lstiter_tester);
	printf("Depois: %s, %s e %s\n", str_1, str_2, str_3);
	return (0);
}

# ft_lstmap

static void	*lstmap_tester(void *content)
{
	char	*temp;

	temp = (char *)malloc(2);
	if (!temp)
		return (NULL);
	*temp = *(char *)content;
	*temp = ft_toupper(*temp);
	return (temp);
}

static void	lstmap_del_tester(void *content)
{
	ft_bzero(content, ft_strlen((char *)content));
}

#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node;
	t_list	*new_list;
	char    str_1[] = "a";
	char    str_2[] = "b";

	list = ft_lstnew(str_1);
	node = ft_lstnew(str_2);
	ft_lstadd_back(&list, node);
	new_list = ft_lstmap(list, lstmap_tester, lstmap_del_tester);
	printf("Content (old list): %s\n", (char *)list->content);
	printf("Next address (old list): %p\n\n", list->next);
	printf("Content (new list): %s\n", (char *)new_list->content);
	printf("Next address (new list): %p\n\n", new_list->next);
	printf("Content (old list): %s\n", (char *)list->next->content);
	printf("Next address (old list): %p\n\n", list->next->next);
	printf("Content (new list): %s\n", (char *)new_list->next->content);
	printf("Next address (new list): %p\n", new_list->next->next);
	return (0);
}

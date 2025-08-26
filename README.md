# Libft

# 42's Common Core Libft

- [ft_isalpha](#ft_isalpha) Verifica se há um caractere alfabético; no idioma padrão "C", é equivalente a (isupper || islower(c)).
- [ft_isdigit](#ft_isdigit) Verifica se há um dígito (0 a 9).
- [ft_isalnum](#ft_isalnum) Verifica se há um caractere alfabético; é equivalente a (isalpha(c) || ​​isdigit(c)).
- [ft_isascii](#ft_isascii) Verifica se c é um valor unsigned char de 7 bits que se enquadra no conjunto de caracteres ASCII.
- [ft_isprint](#ft_isprint) Verifica se há algum caractere imprimível, exceto espaço.
- [ft_strlen](#ft_strlen) A função calcula o comprimento da string apontada por s, excluindo o byte nulo final ('\0'). Valor de retorno: A função retorna o número de bytes na string apontada por s.
- [ft_memset](#ft_memset) A função preenche os primeiros n bytes da área de memória apontada por s, com o byte constante c.
Valor de retorno: A função retorna um ponteiro para a área de memória s.
- [ft_bzero](#ft_bzero) Apaga os dados nos n bytes da memória, começando no local apontado por s, escrevendo zeros (bytes contendo '\0') nessa área. Valor de retorno: Nenhum.
- [ft_memcpy](#ft_memcpy) A função copia n bytes da área de memória src para a área de memória dest. As áreas de memória não devem se sobrepor. Use memmove se as áreas de memória se sobrepuserem. Valor de retorno: Ponteiro para dest.
- [ft_memmove](#ft_memmove) A função copia n bytes da área de memória src para a área de memória dest. As áreas de memória podem se sobrepor: a cópia ocorre como se os bytes em src fossem primeiro copiados para um array temporário que não se sobrepõe a src ou dest, e então os bytes são copiados do array temporário para dest. Valor de retorno: A função retorna um ponteiro para dest.
- [ft_strlcpy](#ft_strlcpy) A função copia strings de até tamanho - 1 caractere da string terminada em NUL src para dst. Garante que o resultado seja terminado em NUL (desde que tamanho seja maior que 0). Observe que um byte para o NUL deve ser incluído em tamanho. Opera somente com strings "C" verdadeiras. Isso significa que src deve ser terminado em NUL. Valor de retorno: O comprimento de src (size_t).
- [ft_strlcat](#ft_strlcat) A função anexa a string terminada em NUL src ao final de dst. Acrescentará no máximo size - strlen(dst) - 1 bytes. Garante a terminação em NUL do resultado (desde que size seja maior que 0 e desde que haja pelo menos um byte livre em dst). Observe que um byte para o NUL deve ser incluído em size. Opera apenas em strings "C" verdadeiras. Isso significa que src e dst devem ser terminadas em NUL. Valores de retorno: Para concatenação bem-sucedida: size_t src + dst.
- [ft_toupper](#ft_toupper) Se c for uma letra minúscula, retorna seu equivalente em maiúscula, se existir uma representação em maiúscula na localidade atual. Caso contrário, retorna c.
- [ft_tolower](#ft_tolower) Se c for uma letra maiúscula, retorna seu equivalente em minúscula, se existir uma representação em minúscula na localidade atual. Caso contrário, retorna c.
- [ft_strchr](#ft_strchr) A função retorna um ponteiro para a primeira ocorrência do caractere c na string s.
Valor de retorno: Ponteiro para o caractere correspondente ou NULL se o caractere não for encontrado. O byte nulo final é considerado parte da string, de modo que, se c for especificado como '\0', essas funções retornam um ponteiro para o terminador.
- [ft_strrchr](#ft_strrchr) A função retorna um ponteiro para a última ocorrência do caractere c na string s.
Valores de Retorno: Ponteiro para o caractere encontrado ou NULL se o caractere não for encontrado. O byte nulo final é considerado parte da string, de modo que, se c for especificado como '\0', essas funções retornam um ponteiro para o terminador.
- [ft_strncmp](#ft_strncmp) A função compara os primeiros (no máximo) n bytes de s1 e s2. A localidade não é levada em consideração. A comparação é feita usando caracteres sem sinal. Valor de Retorno: A função retorna um inteiro menor que, igual a ou maior que zero se s1 (ou os primeiros n bytes dele) for encontrado, respectivamente, menor que, igual a ou maior que s2. - [ft_memchr](#ft_memchr) A função varre os n bytes iniciais da área de memória apontada por s em busca da primeira instância de c. Tanto c quanto os bytes da área de memória apontada por s são interpretados como unsigned char. Valor de retorno: Ponteiro para o tipo correspondente ao byte correspondente, caso contrário, o caractere NULL não ocorre na área de memória fornecida.
- [ft_memcmp](#ft_memcmp) A função compara os primeiros n bytes (cada um interpretado como unsigned char) das áreas de memória s1 e s2. Valor de retorno: A função retorna um inteiro menor que, igual a ou maior que zero se os primeiros n bytes de s1 forem, respectivamente, menores que, iguais ou maiores que os primeiros n bytes de s2. Para um valor de retorno diferente de zero, o sinal é determinado pelo sinal da diferença entre o primeiro par de bytes (interpretado como unsigned char) que diferem em s1 e s2. Se n for zero, o valor de retorno será zero.- [ft_strnstr](#ft_strnstr) Function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a '\0' character are not searched. Return value: If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.
- [ft_atoi](#ft_atoi) Converte a parte inicial da string apontada por nptr para int. Valor de retorno: Valor Convertido ou 0 em caso de erro.

### ---------- MALLOC() ----------

- ​​[ft_calloc](#ft_calloc) A função calloc() em C é usada para alocação dinâmica de memória, projetada especificamente para alocar memória para um array de elementos. Ela difere de malloc() principalmente em dois aspectos principais: Inicialização com Zero: calloc() inicializa todos os bytes do bloco de memória alocado com zero. Este é um recurso crucial, particularmente ao trabalhar com estruturas de dados onde valores iniciais zero são esperados ou obrigatórios. Em contraste, malloc() não inicializa a memória alocada, deixando seu conteúdo indeterminado (frequentemente chamado de "valores lixo").
- [ft_strdup](#ft_strdup) Seu objetivo é duplicar uma determinada string alocando nova memória para a cópia e, em seguida, copiando o conteúdo da string original para esse espaço recém-alocado.

### ---------- Extra Functions ----------

- [ft_substr](#ft_substr) Aloca memória (usando malloc(3)) e retorna uma substring da string 's'. A substring começa no índice 'start' e tem um comprimento máximo de 'len'.
- [ft_strjoin](#ft_strjoin) Aloca memória (usando malloc(3)) e retorna uma nova string, que é o resultado da concatenação de 's1' e 's2'.
- [ft_strtrin](#ft_strtrim) Aloca memória (usando malloc(3)) e retorna uma cópia de 's1' com os caracteres de 'set' removidos do início e do fim.
- [ft_split](#ft_split) Aloca memória (usando malloc(3)) e retorna um array de strings obtido pela divisão de 's' usando o caractere 'c' como delimitador. O array deve terminar com um ponteiro NULL.
- [ft_itoa](#ft_itoa) Aloca memória (usando malloc(3)) e retorna uma string representando o inteiro recebido como argumento. Números negativos devem ser tratados.
- [ft_strmapi](#ft_strmapi) Aplica a função f a cada caractere da string s, passando seu índice como primeiro argumento e o próprio caractere como segundo. Uma nova string é criada (usando malloc(3)) para armazenar os resultados das aplicações sucessivas de f.
- [ft_striteri](#ft_striteri) Aplica a função 'f' a cada caractere da string passada como argumento, passando seu índice como primeiro argumento. Cada caractere é passado por endereço para 'f' para que possa ser modificado, se necessário.
- [ft_putchar_fd](#ft_putchar_fd) Gera o caractere 'c' para o descritor de arquivo especificado.
- [ft_putstr_fd](#ft_putstr_fd) Exibe a string 's' para o descritor de arquivo especificado.
- [ft_putendl_fd](#ft_putendl_fd) Exibe a string 's' para o descritor de arquivo especificado, seguida por uma quebra de linha.
- [ft_putnbr_fd](#ft_putnbr_fd) Exibe o inteiro 'n' para o descritor de arquivo especificado.

### ---------- Bonus Functions ----------

##### ---------- Struct ----------
	typedef struct	s_list
	{
		void		*content;
		struct s_list	*next;
	}		t_list;

- [ft_lstnew](#ft_lstnew) Aloca memória (usando malloc(3)) e retorna um novo nó. A variável membro 'content' é inicializada com o parâmetro fornecido 'content'. A variável 'next' é inicializada com NULL.
- [ft_lstadd_front](#ft_lstadd_front) Adiciona o nó 'new' ao início da lista.
- [ft_lstsize](#ft_lstsize) Conta o número de nós na lista.
- [ft_lstlast](#ft_lstlast) Retorna o último nó da lista.
- [ft_lstadd_back](#ft_lstadd_back) Adiciona o nó 'new' ao final da lista.
- [ft_lstdelone](#ft_lstdelone) Recebe um nó como parâmetro e libera seu conteúdo usando a função 'del'. Libera o nó em si, mas NÃO libera o próximo nó.
- [ft_lstclear](#ft_lstclear) Exclui e libera o nó fornecido e todos os seus sucessores, usando a função 'del' e free(3). Por fim, define o ponteiro para a lista como NULL.
- [ft_lstiter](#ft_lstiter) Itera pela lista 'lst' e aplica a função 'f' ao conteúdo de cada nó.
- [ft_lstmap](#ft_lstmap) Itera pela lista 'lst', aplica a função 'f' ao conteúdo de cada nó e cria uma nova lista resultante das aplicações sucessivas da função 'f'. A função 'del' é usada para excluir o conteúdo de um nó, se necessário.

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

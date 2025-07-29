# Libft - Uma Biblioteca C Personalizada

Libft é um projeto do currículo Common Core da [42 São Paulo](https://www.42sp.org.br/). Consiste em uma biblioteca C estática (`libft.a`) contendo funções de uso geral projetadas para servir como ferramentas fundamentais para tarefas subsequentes de programação em C.

![42 São Paulo](https://img.shields.io/badge/42-São_Paulo-black?style=flat-square&logo=42)

## Sobre a 42

A [42 São Paulo](https://www.42sp.org.br/) é uma escola global de programação gratuita, focada no aprendizado entre pares e na educação baseada em projetos. Este projeto introduz conceitos básicos de programação em C, reimplementando funções da biblioteca padrão e criando utilitários personalizados.

## Visão Geral do Projeto

Libft fornece uma coleção de funções divididas em duas seções:
- **Parte Obrigatória**: Reimplementações de funções libc (ex.: `ft_strlen`, `ft_memcpy`) e ferramentas adicionais (ex.: `ft_substr`, `ft_split`).
- **Parte Bônus**: Funções de manipulação de listas encadeadas (ex.: `ft_lstnew`, `ft_lstadd_front`).

### Principais Recursos

- Funções C padrão reconstruídas com o prefixo `ft_`.
- Utilitários personalizados de manipulação de strings e memória.
- Gerenciamento de listas encadeadas bônus usando uma estrutura `t_list`.
- Gerenciamento rigoroso de memória sem vazamentos.

### Restrições

- Escrito em C, em conformidade com a Norma 42.
- Sem variáveis globais ou travamentos inesperados.
- Compilado com `-Wall -Wextra -Werror`.
- Funções externas limitadas (ex.: `malloc`, `free`, `write`).

## Começando

### Pré-requisitos

- Compilador C (ex.: `clang`).
- Utilitário `make`.

### Como Compilar e Executar

1. Clone o repositório:

```bash
git clone https://github.com/lshiguey/libft.git
cd libft

2. Compile a parte obrigatória:

```bash
make

3. Compile a parte bônus (opcional):

```bash
make
Isso inclui funções de lista encadeada em `libft.a`.

4. Vincule a biblioteca ao seu projeto C:

```bash
clang -o <programa> <arquivo>.c -L<diretório libft.a> -lft

#### Comandos adicionais

- `make clean`: remove arquivos-objeto.
- `make fclean`: remove os arquivos de programa e objeto.
- `make re`: reconstrói tudo.

## Estrutura do Projeto

- `libft.h`: protótipos de funções.
- `ft_*.c`: fontes de funções obrigatórias.
- `ft_*_bonus.c`: fontes de funções bônus.
- `Makefile`: automação de compilação.

## Licença

Este projeto faz parte do currículo 42 e destina-se ao uso educacional.

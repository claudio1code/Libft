# Minha Libft - Projeto 42

![C](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Concluído-brightgreen)
![42 School](https://img.shields.io/badge/School-42%20SP-black)

A `libft` é o primeiro projeto do currículo da escola 42. O objetivo é criar uma biblioteca em C com reimplementações de várias funções da biblioteca padrão, além de algumas funções utilitárias adicionais que serão usadas em projetos futuros.

## 📚 Funções Implementadas

As funções estão organizadas por categorias para facilitar a consulta.

### Funções da Libc (`<ctype.h>`, `<string.h>`, `<stdlib.h>`)

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_strlen`
* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_toupper`
* `ft_tolower`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_memchr`
* `ft_memcmp`
* `ft_strnstr`
* `ft_atoi`
* `ft_calloc`
* `ft_strdup`

### Funções Adicionais

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Funções de Bônus (Listas Ligadas)

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

## ⚙️ Como Compilar e Usar

**1. Compilar a biblioteca**

Para compilar a biblioteca e criar o arquivo `libft.a`, execute o `Makefile`:

```bash
make
```
Isso irá gerar o arquivo de biblioteca `libft.a`.

**2. Usar a biblioteca em outro projeto**

Para usar as funções da `libft` em outro programa C, você precisa incluir o cabeçalho `libft.h` e, durante a compilação, linkar a biblioteca.

Suponha que você tenha um arquivo `meu_programa.c`:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Olá, mundo, usando a libft!\n", 1);
    return (0);
}
```

Compile o seu programa com o seguinte comando:

```bash
# Onde -L. indica para o compilador procurar a biblioteca no diretório atual
# E -lft diz para linkar com a biblioteca 'libft.a'
gcc meu_programa.c -L. -lft -o meu_programa
```

Depois, é só executar:
```bash
./meu_programa
```

## 👤 Autor

**Claudio Matheus**

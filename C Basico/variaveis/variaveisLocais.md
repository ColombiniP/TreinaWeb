# Variáveis Locais

Essas variáveis são declaradas dentro de uma função ou bloco de código específicos e só são acessíveis nesse contexto, não conseguimos usá-las fora dessas estruturas.

Pense assim:

A variável local nasce com um bloco de código e morre quando ele deixa de ser executado.

Veja o exemplo:
```c
#include <stdio.h>
int main(void)
{
	int idade = 32;
}
```

A variável do tipo **int** foi declarada dentro do escopo da função **main()**.

Isso significa que ela não pode ser acessada por nenhuma outra função fora do main() function.
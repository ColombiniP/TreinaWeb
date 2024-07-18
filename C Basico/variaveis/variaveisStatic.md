# Variáveis Static

Existem as variáveis estáticas globais e locais.

Variáveis static, sempre mantém seu valor mesmo estando fora de seu escopo de origem.
>Preservam seu valor anterior em seu escopo anterior e não são inicializadas novamente no novo escopo.

Normalmente quando uma variável local em uma função termina sua execução junto com a função, essa variável é destruida.

Exemplo:
```c
#include<stdio.h>
int fun()
{
	// inicializa a variavel static
	static int count = 0;
	// incrementa a variável
	count++;
	return count;
}

int main(void)
{
	printf("%d",fun());
	printf("%d",fun());
	return 0;
}
```
Saída:
```c
// 1 2
```

Esse mesmo código sem o uso do **static** na inicialização da variavel count, retornaria:
```c
// 1 1
```

Justamente porque a função func() é destruida após seu uso.

Variáveis estáticas são alocadas na memória no [segmento de dados](acervolima.com/layout-de-memoria-de-programas-c) e não no seguimento de pilha.

Variáveis estáticas (como variáveis glovais) são inicializadas como 0, se não forem explicitamente inicializadas.

## Variável Local Static

Basta seguir essa regra para declarar uma variável estática global:
```c
static int numero;
```

Fazendo isso a variavel já está declarada.
Quando uma variável estática local é criada, o compilador cria e armazena permanentemente em um espaço no armazenamento. Parecido com o que acontece com as variáveis globais.

## Variável Global Static

A única diferença que a global tem, é que, ela é acessível de outros escopos, de qualquer função, já a local não.

***Fonte:***
[Acervo lima](acervolima.com/variaveis-staticas-em-c/);
Treinaweb
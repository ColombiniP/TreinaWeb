# Variáveis

Variáveis são espaços na memória que usamos para guardar valores e que o programa pode modificalas. 

Em **C** variáveis começam com a declaração de tipo, char, int, float, etc, ou se houver, com o modificardor do tipo e depois o tipo, em seguida o nome da variável.

```c
int numero;
long int numero2;
```

As variáveis de mesmo tipo podem ser declaradas juntas.

```c
int a, b, c;
```

Para fixar, vamos programar um código tradicional de olá mundo!
```c
#include <stdio.h>
int main(void)
{
	int valor = 10;
	printf("Olá, mundo!\n\nA variável número vale %i\n\n",valor);

	// Após compilar a saíde é:
	// Olá, mundo!
	
	//A variável número vale 10
}
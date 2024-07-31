# Constantes

Constantes ou variáveis do tipo ***const*** são aquelas que não podem ter seu valor modificado pelo programa.

Servem bem para àqueles valores que nunca podem ser alterados, como o **PI** 3,14..., força da gravidade, velocidade da luz. Todos são valores fixos no mundo real e não podem sofrer alterações.

Exemplo:
```c
#include<stdio.h>
const float PI = 3.141592;
int main(void)
{
float raio = 5.0;
float resultado;

resultado = 2* PI * raio;
printf("O comprimento do circulo é: %f\n", resultado);
}

// O comprimento do circulo é:31.42
```

Veja que a variável PI foi declarada globalmente e definida como uma ***const*** e seu valor não poderá ser mais alterado.

# Conversão de dados

Sempre precisamos lidar com dados de todos os [***tipos***](../TreinaWeb/C Basico/tiposDeDados/tipoDeDados.md).

Em alguns momentos vamos precisar converter esses dados para outros tipos, como por exemplo em operçãoes matemáticas de divisão entre inteiros que pode resultar em decimais.

```c
int n1 = 5;
int n2 = 2;

n1 / n2; // esse resultado é um número decimal, o que daria erro na compilação
```

Podemos resolver isso usando o **CAST** ;
```c
int n1 = 5;
int n2 = 2;

float reultado = (float) n1 / n2; // aqui temos o resultado preciso 2.500000
```

Graças ao uso do **CAST**(float), temos o resultado que precisamos de forma precisa.
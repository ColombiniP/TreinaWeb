# Tipo de Dados em C

Temos 5 tipos de dados para trabalhar:

- Char 
	- unsigned char
	- signed char
> Tipo char serve para armazenar caracteres, sendo muito útil em variáveis que precisam de armazenar o sexo de alguém.
Exemblo: M = masculino e F = feminino

- Int
	- unsigned int
	- signed int
	- short int
		- unsigned short int
		- signed short int
	- long int
		- unsigned long int
		- signed long 
> Tipo int é usado para armazenar valores inteiros.

- Float
> Tipo float é usado para armazenar números decimais de precisão simples, valor quebrado como por exemplo: 2,50.

- Double 
	- long double 
> Tipo double é um float com precisão maior .

- Void
> Void é um tipo de dado especial que não retorna nenhum valor (vázio).

## Modificadores de ***Tipo***

Tem o objetivo de definir se um tipo tem números negativos ou positivos, se tem apenas positivos e se é um tipo curto ou longo.

- Unsigned
> Define suas variáveis com uma faixa fixa de valores positivos, excluindo todo e qualquer valor negativo.

- Signed
> É o contrario do **unsigned**, tendo em sua faixa tanto valores positivo e negativos.

- Long
> Esse modificador define uma faixa de valores maior que o comum.

- Short
> Tem a função de prover inteiros menores

## Range dos Tipos

|Tipo|Bytes|Range|
|-|-|-|
|char|1|-127 a 127|
|unsigned char|1|0 a 255|
|signed char|1|-127 a 127|
|int|2|-32.767 a 32.767|
|unsigned int|2|0 a 65.535|
|signed int|2|-32.767 a 32.767|
|short int|2|-32.767 a 32.767|
|unsigned short int|2|0 a 65.535|
|signed short int|2|-32.767 a 32.767|
|long int|4|-2.147.483.647 a 2.147.483.647|
|unsigned long int|4|0 a 4.294,967,295|
|signed long int|4|-2.147.483.647 a 2.147.483.647|
|float|4|seis dígitos de precisão|
|double|8|dez dígitos de precisão|
|long double|10|dez dígitos de precisão|

## Lista para chamar cada tipo em **"scanf"** ou **"printf"**

|Tipo|Caractere|
|-|-|
|char|%c|
|unsigned char|%c|
|signed char|%c|
|int|%i|
|unsigned int|%u|
|signed int|%i|
|short int|%hi|
|signed short int|%hi|
|unsigned short int|%hu|
|long int|%li|
|signed long int|%li|
|unsigned long int|%lu|
|floar|%f|
|double|%lf|
|long double|%Lf|
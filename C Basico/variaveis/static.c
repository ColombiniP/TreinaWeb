#include<stdio.h>

// variável global
static int count = 0;

// função usando a variável statica
int fuc()
{
	count++;
	return count;
}

// chamando a função com os valores persistidos pelo static
int main(void)
{
	printf("%d\n", fuc());
	printf("%d\n", fuc());
	return 0;
}
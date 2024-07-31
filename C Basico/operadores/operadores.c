#include<stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(float a, float b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

int incremento(int a) {
    return ++a;
}

int decremento(int a) {
    return --a;
}

int main(void)
{
   
    int resultadoSoma = soma(5,2);
    printf("Soma 5 + 2 = %i\n", resultadoSoma);


    int resultadoSubtracao = subtracao(5,2);
    printf("Subtracao 5 - 2 = %i\n", resultadoSubtracao);

    
    int resultadoMultiplicacao = multiplicacao(5,2);
    printf("Multiplicacao 5 * 2 = %i\n", resultadoMultiplicacao);

    
    float resultadoDivisao = divisao(5,2);
    printf("Divisao 5 / 2 = %.2f\n", resultadoDivisao);

    
    int resultadoModulo = modulo(5,2);
    printf("Modulo 5 percent 2 = %i\n", resultadoModulo);

    int resultadoIncremento = incremento(5);
    printf("Incremento 5 = %i\n", resultadoIncremento);

    int resultadoDecremento = decremento(5);
    printf("Decremento 5 = %i\n", resultadoDecremento);
}
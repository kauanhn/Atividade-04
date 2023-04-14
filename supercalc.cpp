#include <stdio.h>
#include <stdlib.h>

void cabecalho();
void rodape();
float le_valida_n1();
float le_valida_n2();
char le_valida_operador();
float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);

int main() {
    float n1, n2, resultado;
    char operador, continuar;

    do {
        cabecalho(); // exibe o cabeçalho

        // lê e valida o primeiro número
        n1 = le_valida_n1();

        // lê e valida o operador
        operador = le_valida_operador();

        // lê e valida o segundo número
        n2 = le_valida_n2();

        // realiza a operação solicitada pelo usuário
        switch (operador) {
            case '+':
                resultado = soma(n1, n2);
                break;
            case '-':
                resultado = subtracao(n1, n2);
                break;
            case '*':
                resultado = multiplicacao(n1, n2);
                break;
            case '/':
                resultado = divisao(n1, n2);
                break;
        }

        // exibe o resultado
        printf("\nResultado da soma entre %.2f e %.2f eh: %.2f\n", n1, n2, resultado);

        // exibe o rodapé e pergunta se o usuário deseja continuar
        rodape();
        printf("Deseja continuar? (S/N) ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    return 0;
}

void cabecalho() {
    printf("=======================================\n");
    printf("        CALCULADORA EM C               \n");
    printf("=======================================\n\n");
}

void rodape() {
    printf("\n=======================================\n");
}

float le_valida_n1() {
    float n1;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    return n1;
}

float le_valida_n2() {
    float n2;
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    return n2;
}

char le_valida_operador() {
    char operador;
    printf("Digite o operador: ");
    scanf(" %c", &operador);
    return operador;
}

float soma(float n1, float n2) {
    return n1 + n2;
}

float subtracao(float n1, float n2) {
    return n1 - n2;
}

float multiplicacao(float n1, float n2) {
    return n1 * n2;
}

float divisao(float n1, float n2) {
    if (n2 == 0) {
        printf("Erro: divisao por zero\n");
        return 0;
    } else {
        return n1 / n2;
    }
}

#include <stdio.h>
#include <stdlib.h>


void imparmulti(int num) {
    if (num % 2 != 0 && num % 5 == 0) {
        printf("%d ", num);
    }
}

int unidade(double valor, int codigo, double *resultado) {
    switch (codigo) {
        case 1:  *resultado = valor * 1.8 + 32; break;         
        case 2:  *resultado = (valor - 32) / 1.8; break;       
        case 3:  *resultado = valor + 273.15; break;           
        case 4:  *resultado = valor - 273.15; break;          
        case 5:  *resultado = valor / 1609.34; break;          
        case 6:  
        case 7:  *resultado = valor * 1609.34; break;          
        case 8:  *resultado = valor * 2.205; break;            
        case 9:  *resultado = valor / 2.205; break;            
        case 10: *resultado = valor / 1.609; break;            
        case 11: *resultado = valor * 1.609; break;           
        default: return 0;
    }
    return 1;
}

void executarOperacao(double val1, double val2, int cod) {
    switch (cod) {
        case 1: printf(val1 > val2 ? "Verdadeiro\n" : "Falso\n"); break;
        case 2: printf(val1 < val2 ? "Verdadeiro\n" : "Falso\n"); break;
        case 3: printf(val1 == val2 ? "Verdadeiro\n" : "Falso\n"); break;
        case 4: printf(val1 != val2 ? "Verdadeiro\n" : "Falso\n"); break;
        default: printf("operador invalido\n"); break;
    }
}

// ==========================================
// EXERCÍCIOS PROVA ESOFT-M-A
// ==========================================

void exercicio0_ESOFT_A() {
    int n1, n2, n3, n4;
    printf("Digite 4 numeros inteiros:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("Numeros impares e multiplos de 5: ");
    imparmulti(n1);
    imparmulti(n2);
    imparmulti(n3);
    imparmulti(n4);
    printf("\n");
}

void exercicio1_ESOFT_A() {
    int qntd_itens, capmoc, mochila;
    printf("Escreva a quantidade de itens: ");
    scanf("%d", &qntd_itens);
    printf("Escreva a capacidade da mochila: ");
    scanf("%d", &capmoc);

    if (capmoc <= 0) {
        printf("Capacidade invalida!\n");
        return;
    }

    mochila = qntd_itens / capmoc;
    printf("Mochilas totalmente preenchidas: %d\n", mochila);
}

void exercicio2_ESOFT_A() {
    double entrada, resultado;
    int conversao;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &entrada);
    printf("Digite o codigo da conversao desejada: ");
    scanf("%d", &conversao);

    if (unidade(entrada, conversao, &resultado)) {
        printf("Valor convertido: %.4lf\n", resultado);
    } else {
        printf("O codigo de conversao '%d' nao existe no sistema!\n", conversao);
    }
}


void exercicio0_ESOFT_B() {
    int qntd_itens, capmoc, mochila, sobra;
    printf("Escreva a quantidade de itens: ");
    scanf("%d", &qntd_itens);
    printf("Escreva a capacidade da mochila: ");
    scanf("%d", &capmoc);

    if (capmoc <= 0) {
        printf("Capacidade invalida!\n");
        return;
    }

    mochila = qntd_itens / capmoc;
    sobra = qntd_itens % capmoc;

    printf("Mochilas totalmente preenchidas: %d\n", mochila);
    printf("Quantidade de itens que sobraram: %d\n", sobra);
}

void exercicio1_ESOFT_B() {
    int a, b, c;
    printf("Insira tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || b == c || c == a) {
        printf("Os numeros tem que ser distintos\n");
    } else {
        printf("Os numeros em ordem crescente sao: ");
        if (a < b && a < c) {
            if (b < c) printf("%d %d %d\n", a, b, c);
            else printf("%d %d %d\n", a, c, b);
        } else if (b < a && b < c) {
            if (a < c) printf("%d %d %d\n", b, a, c);
            else printf("%d %d %d\n", b, c, a);
        } else {
            if (a < b) printf("%d %d %d\n", c, a, b);
            else printf("%d %d %d\n", c, b, a);
        }
    }
}

void exercicio2_ESOFT_B() {
    double v1, v2;
    int codigo;
    printf("Digite o primeiro valor: ");
    scanf("%lf", &v1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &v2);
    printf("Digite o codigo da operacao (1->, 2-<, 3-==, 4-!=): ");
    scanf("%d", &codigo);

    executarOperacao(v1, v2, codigo);
}

void exercicio0_ADS() {
    int a, b, c, d, e;
    printf("Insira 5 numeros inteiros: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a + 1 == b || a - 1 == b) printf("%d e %d sao consecutivos\n", a, b);
    if (b + 1 == c || b - 1 == c) printf("%d e %d sao consecutivos\n", b, c);
    if (c + 1 == d || c - 1 == d) printf("%d e %d sao consecutivos\n", c, d);
    if (d + 1 == e || d - 1 == e) printf("%d e %d sao consecutivos\n", d, e);
}

void exercicio1_ADS() {
    float peso, altura, imc;
    printf("Insira seu peso em kg: ");
    scanf("%f", &peso);
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura deve ser maior que zero!\n");
        return;
    }

    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) printf("Classificacao: Abaixo do peso\n");
    else if (imc <= 24.9) printf("Classificacao: Normal\n");
    else if (imc <= 29.9) printf("Classificacao: Acima do peso\n");
    else printf("Classificacao: Obeso\n");
}

void exercicio2_ADS() {
    int A = 6, B = 0, C = 0;

    printf("Estado inicial: Pino A = %d, Pino B = %d, Pino C = %d\n\n", A, B, C);

    A -= 1; C += 1;
    printf("Passo 1: Mover disco 1 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A -= 2; B += 2;
    printf("Passo 2: Mover disco 2 de A para B -> [A = %d, B = %d, C = %d]\n", A, B, C);

    C -= 1; B += 1;
    printf("Passo 3: Mover disco 1 de C para B -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A -= 3; C += 3;
    printf("Passo 4: Mover disco 3 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    B -= 1; A += 1;
    printf("Passo 5: Mover disco 1 de B para A -> [A = %d, B = %d, C = %d]\n", A, B, C);

    B -= 2; C += 2;
    printf("Passo 6: Mover disco 2 de B para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A -= 1; C += 1;
    printf("Passo 7: Mover disco 1 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    printf("\nResultado final: Todos os discos no Pino C!\n");
    printf("Pino A = %d, Pino B = %d, Pino C = %d\n", A, B, C);
}


int main(int argc, char *argv[]) {
    

    exercicio0_ESOFT_A();
    exercicio1_ESOFT_A();
    exercicio2_ESOFT_A();

    exercicio0_ESOFT_B();
    exercicio1_ESOFT_B();
    exercicio2_ESOFT_B();

    exercicio0_ADS();
    exercicio1_ADS();
    exercicio2_ADS();

    return 0;
}

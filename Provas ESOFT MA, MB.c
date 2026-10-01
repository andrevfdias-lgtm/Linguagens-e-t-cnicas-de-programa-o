#include <stdio.h>
#include <stdlib.h>

void imparmulti(int num) {
    if (num % 2 != 0 && num % 5 == 0) {
        printf("%d\n", num);
    }
}

int unidade(double valor, int codigo, double *resultado) {
    switch (codigo) {
    	
        case 1: 
            *resultado = valor * 1.8 + 32;
            break;
        case 2: 
            *resultado = (valor - 32) / 1.8;
            break;
        case 3: 
            *resultado = valor + 273.15;
            break;
        case 4: 
            *resultado = valor - 273.15;
            break;

        
        case 5: 
            *resultado = valor / 1609.34;
            break;
        case 6: 
        case 7: 
            *resultado = valor * 1609.34;
            break;

        
        case 8: 
            *resultado = valor * 2.205;
            break;
        case 9: 
            *resultado = valor / 2.205;
            break;

        
        case 10: 
            *resultado = valor / 1.609;
            break;
        case 11: 
            *resultado = valor * 1.609;
            break;

        default:
            return 0; 
    }
    return 1; 
}

void executarOperacao(double val1, double val2, int cod) {
    switch (cod) {
        case 1:
            if (val1 > val2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        case 2:
            if (val1 < val2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        case 3:
            if (val1 == val2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        case 4:
            if (val1 != val2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        default:
            printf("operador invalido\n");
            break;
    }
}

void exercicio0ads(){
    int a, b, c, d, e;

    printf("Insira 5 numeros inteiros: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a + 1 == b || a - 1 == b) {
        printf("%d e %d sao consecutivos\n", a, b);
    }
    if (b + 1 == c || b - 1 == c) {
        printf("%d e %d sao consecutivos\n", b, c);
    }
    if (c + 1 == d || c - 1 == d) {
        printf("%d e %d sao consecutivos\n", c, d);
    }
    if (d + 1 == e || d - 1 == e) {
        printf("%d e %d sao consecutivos\n", d, e);
    }
}


void exercicio1ads() {
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

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n");
    }
}

void exercicio2_C() {
    int A = 6;
    int B = 0;
    int C = 0;

    printf("\n--- RESOLUCAO DA TORRE DE HANOI ---\n");
    printf("Estado inicial: Pino A = %d, Pino B = %d, Pino C = %d\n\n", A, B, C);

    A = A - 1;
    C = C + 1;
    printf("Passo 1: Mover disco 1 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A = A - 2;
    B = B + 2;
    printf("Passo 2: Mover disco 2 de A para B -> [A = %d, B = %d, C = %d]\n", A, B, C);

    C = C - 1;
    B = B + 1;
    printf("Passo 3: Mover disco 1 de C para B -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A = A - 3;
    C = C + 3;
    printf("Passo 4: Mover disco 3 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    B = B - 1;
    A = A + 1;
    printf("Passo 5: Mover disco 1 de B para A -> [A = %d, B = %d, C = %d]\n", A, B, C);

    B = B - 2;
    C = C + 2;
    printf("Passo 6: Mover disco 2 de B para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A = A - 1;
    C = C + 1;
    printf("Passo 7: Mover disco 1 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    printf("\nResultado final: Todos os discos no Pino C!\n");
    printf("Pino A = %d, Pino B = %d, Pino C = %d\n", A, B, C);
}

int main(int argc, char *argv[]) {
	
	//1)
	
    int n1, n2, n3, n4;

    printf("Digite 4 numeros inteiros:\n");
    printf("Numero 1: ");
    scanf("%d", &n1);
    
    printf("Numero 2: ");
    scanf("%d", &n2);
    
    printf("Numero 3: ");
    scanf("%d", &n3);
    
    printf("Numero 4: ");
    scanf("%d", &n4);

    printf("\nNumeros impares e multiplos de 5:\n");

    imparmulti(n1);
    imparmulti(n2);
    imparmulti(n3);
    imparmulti(n4);
    
    //2)
    int qntd_itens, capmoc, mochila;
    
    printf("\nEscreva quantidade de itens: ");
    scanf("%d", &qntd_itens);
    
    printf("Escreva a capacidade da mochila: ");
    scanf("%d", &capmoc);
    
    mochila = qntd_itens / capmoc;
    
    printf("A quantidade de mochilas preenchidas sao de %d\n", mochila);
    
    //3)

    double entrada, resultado;
    int conversao;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &entrada);

    printf("Digite o codigo da conversao desejada: ");
    scanf("%d", &conversao);

    
    if (unidade(entrada, conversao, &resultado)) {
        printf("\nValor convertido: %.4lf\n", resultado);
    } else {
        printf("\nO codigo de conversao '%d' nao existe no sistema!\n", conversao);
    }
    


	
	//1) 
	
	int qntd_itens, capmoc, mochila, sobra;
    
    printf("\nEscreva quantidade de itens: ");
    scanf("%d", &qntd_itens);
    
    printf("Escreva a capacidade da mochila: ");
    scanf("%d", &capmoc);
    
    mochila = qntd_itens / capmoc;
    sobra = qntd_itens % mochila;
    
    printf("A quantidade de mochilas preenchidas sao de %d\n", mochila);
    printf("A quantidade de itens que sobrou foi de %d\n", sobra);
    
    //2)
    
    int a, b, c;
    
    printf("Insira tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == b || b == c || c == a) {
        printf("Os numeros tem que ser distintos\n");
    } else {
        printf("Os numeros em ordem crescente sao: ");

        if (a < b && a < c) {
            if (b < c) {
                printf("%d %d %d\n", a, b, c);
            } else {
                printf("%d %d %d\n", a, c, b);
            }
        } else if (b < a && b < c) {
            if (a < c) {
                printf("%d %d %d\n", b, a, c);
            } else {
                printf("%d %d %d\n", b, c, a);
            }
        } else {
            if (a < b) {
                printf("%d %d %d\n", c, a, b);
            } else {
                printf("%d %d %d\n", c, b, a);
            }
        }
    }
    
    //3)
    
    double v1, v2;
    int codigo;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &v1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &v2);

    printf("Digite o codigo da operacao (1->, 2-<, 3-==, 4-!=): ");
    scanf("%d", &codigo);

    executarOperacao(v1, v2, codigo);

	 //0)

    int prova, op;

    printf("Insira a prova (1 - esoft-m-a, 2 - esoft-m-b, 3 - ads-n-a): \n");
    scanf("%d", &prova);

    printf("Insira o numero do exercicio que deseja executar (0, 1 ou 2): \n");
    scanf("%d", &op);

    if (prova == 1) {
        if (op == 0) exercicio0();
        else if (op == 1) exercicio1();
        else if (op == 2) exercicio2();
        else printf("opcao invalida\n");
    } 
    else if (prova == 2) {
        if (op == 0) exercicio0b();
        else if (op == 1) exercicio1b();
        else if (op == 2) exercicio2_B();
        else printf("opcao invalida\n");
    } 
    else if (prova == 3) {
        if (op == 0) exercicio0ads();
        else if (op == 1) exercicio1ads();
        else if (op == 2) exercicio2_C();
        else printf("opcao invalida\n");
    } 
    else {
        printf("opcao invalida\n");
    }

    return 0;
}

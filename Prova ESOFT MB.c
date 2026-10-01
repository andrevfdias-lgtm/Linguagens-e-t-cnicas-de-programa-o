#include <stdio.h>
#include <stdlib.h>

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


int main(int argc, char *argv[]) {
	
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

    return 0;
}

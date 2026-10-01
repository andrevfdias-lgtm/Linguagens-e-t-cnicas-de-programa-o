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
	 
    return 0;
}

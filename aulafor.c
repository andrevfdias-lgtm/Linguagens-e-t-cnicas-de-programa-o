#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 10 numeros, mostre o maior entre os 5 primeiros e o menor entre os restantes */

int compara (int a, int b){
	if (a>b) return;
	else return b;
}


int main(int argc, char *argv[]) {
	int valores [10];
	int maior, menor, i;
	
	printf ("Vamos ler os valores: \n");
	//for(inicialização; verificacao; incremento)
	for (i=0; i<10; i++){
		scanf ("%d", &valores[i]);
	}
	
	for (i=1, maior = valores[0]; i<5; i+=2){
		int temp = compara(valores[i], valores [i+1]);
		maior = compara(maior, temp);
	}
	printf ("\n %d", maior);
	
	
	return 0;
}

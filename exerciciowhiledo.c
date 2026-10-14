#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que peça ao usuario para digitar 10 numeros que sejam
inteiros positivos, e ignorando os negativos. E mostre na tela o resultado da
soma e a média desses valores.

-- OBS: não preciasa usar vetor, usem os laços da aula de hoje
							while e do-while
 */

int main(int argc, char *argv[]) {
	
	int soma, i, n;
	
	i=0;
	while (i<10){
		scanf("%d", &n);
		if(n>0){
			soma += n;
			i++;
		}
	}
	printf("soma = %d e media = %d", soma, (soma/10));
	
	return 0;
}

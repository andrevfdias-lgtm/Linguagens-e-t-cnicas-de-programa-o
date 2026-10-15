#include <stdio.h>
#include <stdlib.h>

/* Lista de exercicios */

int main(int argc, char *argv[]) {
	
	/* int i, j, k, n, r;
	
	for (i=0, j=1; i<10; i++, j--){
		printf ("esse e o laco FOR\n");
	}
	
	while (i<10){
		printf ("%d, laco WHILE", i);
		if(n%2 == 0) i++;
		n++;
	}
	
	do {
		printf ("%d, laco DO", i).
		if (n%2 == 0) i++;
		n++;
	}	while (i<10); 
	
	EXERCICIO1: Elabore um programa que permita a entrada de 3 valores.
	E conte do primeiro valor inserido, ate o segundo valor, com o
	passo de contagem dado pelo terceiro valor
	ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.*/
	
	
	int ini, fim, passo;
	
	printf ("Insira valor inicial, final e passo: ");
	scanf ("%d %d %d", &ini, &fim, &passo);
	if (ini<fim){
		while (ini<fim){
			printf ("|%d|", ini);
			ini += passo;
		}
		
	}else{
		while (ini>fim){
			printf ("|%d|", ini);
			ini -= passo;
		
		}
	}
	
	
	/*EXERCICIO2: Faça um programa que receba um numero n e realize a soma dos
	n primeiros termos de sequencia definida
	[S = 1/2; 1/4; 1/8; 1/16...N] */
	
	/*EXERCICIO3: Crie um programa que exiba na tela, o triângulo de pascal */
	
	return 0;
}

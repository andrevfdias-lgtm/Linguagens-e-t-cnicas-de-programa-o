#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	
	int valor[10],i, cont;
	
	for (i=0; i<10; i++){
		scanf("%d", &valor[i]);
	} 
	i=0;
	
	printf ("Acabou o for");
	printf ("\nIniciando o while: \n");
	
	while (i<10){
		scanf ("%d", &valor[i]);
		i++;
	}
	
	i=0;
	do{
		printf("%d", valor[i]);
		i++; 
	}while(i<10);

	{
		int valor; 
		printf ("\nLeia um valor par: ");
		scanf ("%d", &valor);
		
		while (valor%2==1){
			printf("\nValor inserido impar, insira um novo valor: \n");
			scanf ("%d", &valor);
		}
		
		do {
			printf("Insira um valor par: ");
			scanf ("%d", &valor);
		}while(valor%2==1);
		
		printf("A raiz de %d = %.2f", valor, sqrt(valor));
	}

	return 0;
}

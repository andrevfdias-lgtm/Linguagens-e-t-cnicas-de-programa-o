#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
 //1)
 int primeiro, segundo, aux;
 
printf ("Insira o primeiro valor: ");
scanf("%d", &primeiro);

printf ("Insira o segundo valor: ");
scanf("%d", &segundo);

aux = primeiro;
primeiro = segundo;
segundo = aux ;
	
printf ("%d \n %d", segundo, primeiro);

//2)

double numero;

printf ("\nInsira o valor que deseja transformar em notacao cientifica: ");
scanf ("%lf", &numero);

printf ("\n %e", numero);

//3)


	//4)
	
	float salario, vendas, comissao;
	
	printf ("\n Insira seu salario: ");
	scanf ("%f", &salario);
	
	printf ("\n Insira valor total em vendas: ");
	scanf ("%f", &vendas);
	
	printf ("\n )
	
	
	return 0;
}

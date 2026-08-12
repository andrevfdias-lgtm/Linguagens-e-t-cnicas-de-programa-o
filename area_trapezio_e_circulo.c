#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float area, raio;
	float basema, baseme, altura, area_trapezio;
	
	printf("Insira o raio do circulo");
	scanf("%f", &raio);

	//area = M_PI* pow(raio,2);
	area = pi*(raio*raio);
	
	printf("A area do circulo de raio %f = %f", raio, area);
	
	printf("Agora a do trapezio");
	
	printf("\nInsira a base maior");
	scanf ("%f", &basema);
	
	printf("\nInsira a base menor");
	scanf ("%f", &baseme);	
	
	printf("\nInsira a altura");
	scanf ("%f", &altura);
	
	area_trapezio = ((basema+baseme) * altura) /2;
	printf ("\nA area do trapezio de baseme = %.1f, basema = %1.f e altura = %.1f e igual a %.1f", basema, baseme, altura, area_trapezio);
	
	
	return 0;
}

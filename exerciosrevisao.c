#include <stdio.h>
#include <stdlib.h>
#define AZUL "\033[34m"
#define VERDE "\033[32m"
#define VERMELHO "\033[31m"
#define RESET "\033[0m"

//1)

int multDigito( int dig, int valor){
	return dig*valor;
}

float celsiusParaFahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}

float fahrenheitParaCelsius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

float media(float n1, float n2, float n3) {
    return (n1+n2+n3) / 3;
}

int main(int argc, char *argv[]) {
	
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, nv1, nv2, soma, resto, resto2;
	
    scanf ("%d %d %d . %d %d %d . %d %d %d - %d %d",
			 &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &nv1, &nv2);
			 
	printf ("Confirme o seu CPF %d%d%d.%d%d%d.%d%d%d-%d%d",
			 n1, n2, n3, n4, n5, n6, n7, n8, n9, nv1, nv2);
			 
	soma = multDigito(n1,10)+multDigito(n2,9)+multDigito(n3,8)+
		   multDigito(n4,7)+multDigito(n5,6)+multDigito(n6,5)+	 
           multDigito(n7,4)+multDigito(n8,3)+multDigito(n9,2);
           
    soma *=10;
    resto =soma%11;
    if (resto == 10) resto = 0;
    printf("\n%d", resto);
    
    soma = multDigito(n1,11)+multDigito(n2,10)+multDigito(n3,9)+
		   multDigito(n4,8)+multDigito(n5,7)+multDigito(n6,6)+	 
           multDigito(n7,5)+multDigito(n8,4)+multDigito(n9,3)+multDigito(nv1,2);
           
    soma *=10;
    resto2 =soma%11;
    if (resto2 == 10) resto2 = 0;
    printf("\n%d", resto2);
    
    //2
    float temperatura, resultado;
    char grandeza;

    printf("\nDigite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite C para Celsius ou F para Fahrenheit: ");
    scanf(" %c", &grandeza);

    if (grandeza == 'C' || grandeza == 'c') {
        resultado = celsiusParaFahrenheit(temperatura);
        printf("Temperatura em Fahrenheit: %.2f F\n", resultado);
    }
    else if (grandeza == 'F' || grandeza == 'f') {
        resultado = fahrenheitParaCelsius(temperatura);
        printf("Temperatura em Celsius: %.2f C\n", resultado);
    }
//3
    float nota1, nota2, nota3, mediafinal, exame;
	
	printf("\nInsira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("\nInsira sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("\nInsira sua terceira nota: ");
    scanf("%f", &nota3);
    
    mediafinal = media(nota1, nota2, nota3);
    printf("Media: %.2f\n", mediafinal);
    
    exame = 10 - mediafinal;
    
    if (mediafinal >= 7) {
    printf(AZUL "APROVADO" RESET);
}
else if (mediafinal >= 4 && mediafinal <7) {
    printf(VERDE "EXAME - Faltam %.2f pontos para chegar a 10.0" RESET, exame);
}
else {
    printf(VERMELHO "REPROVADO" RESET);
}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
tipo nome (lista de paremetros{
  		comandos...
  		comandos
 */ 		
void exec3 (){
	//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em grausFahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
	float tcelsius, tfahrenheit;
	printf ("\n Insira a temperatura em graus celsius: ");
	scanf ("\n %f", &tcelsius);
	tfahrenheit = tcelsius * (9.0/5.0) + 32.0;
	printf ("\n A temperatura em fahremheit e: %f", tfahrenheit);
}
	
void exec2 (){
	// Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares	
	float real, dolar, conversao;
	printf ("\n Insira o valor em real: ");
	scanf ("\n %f", &real);
	printf ("\n Insira a cotacao atual do dolar: ");
	scanf ("\n %f", &dolar);
	conversao = real / dolar;
	printf ("\n A conversao foi de: %f", conversao);
}
	
void exec8 (){
	//(URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
	int n, segundos, horas, minutos;
	printf ("\n Digite tempo de duracao em segundos do evento na fabrica: ");
	scanf ("\n %d", &n);
	horas = n / 3600;
    minutos = (n % 3600) / 60;
	segundos = n % 60;
	printf("%d:%d:%d\n", horas, minutos, segundos);
}

int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercicio deseja resolver: [2|3|8]\n");
	scanf("%d", &op);
	
	switch(op){
	case 2:
		 exec2 ();
		 break;
		 
    case 3:
		 exec3();
		 break;		
		 
    case 8:
		 exec8();
		 break; 
		 
		 default:
		 	printf("Opcao invalida!\n");
		 	break;
}
	return 0;
}

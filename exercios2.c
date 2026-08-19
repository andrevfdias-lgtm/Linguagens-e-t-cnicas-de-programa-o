#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//1) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual

	
	int idade, ano_anual, ano_nascimento;
	
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	
	printf ("Digite o ano atual: ");
	scanf ("%d", &ano_anual);
	
	ano_nascimento = ano_anual - idade;
	printf ("Seu ano de nascimento e: %d", ano_nascimento);
	
	//2) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros porsegundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s
	
	float km, m, h;
	
	printf ("\n Digite a velocidade em km/h: ");
	scanf ("\n %f", &km);
	
	m = km/36.0;
	printf ("\n A velocidade em m/s e: %f", m);
	
	//3) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares
	
	float real, dolar, conversao;
	
	printf ("\n Insira o valor em real: ");
	scanf ("\n %f", &real);
	
	printf ("\n Insira a cotacao atual do dolar: ");
	scanf ("\n %f", &dolar);
	
	conversao = real / dolar;
	printf ("\n A conversao foi de: %f", conversao);
	
	// 4) Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em grausFahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
	
	float tcelsius, tfahrenheit;
	
	printf ("\n Insira a temperatura em graus celsius: ");
	scanf ("\n %f", &tcelsius);
	
	tfahrenheit = tcelsius * (9.0/5.0) + 32.0;
	printf ("\n A temperatura em fahremheit e: %f", tfahrenheit);
	
	//5) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p = 3.141592. 
	
	float graus, radianos;
	
	printf ("\nInsira o angulo em graus: ");
	scanf ("\n %f", &graus);
	
	radianos = graus * 3.141592/180;
	printf ("\n O valor em radianos e: %f", radianos); 
	
	
	//6) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
	
	int numero, ant, suc;
	
	printf ("\n Insira um numero: ");
	scanf ("\n %d", &numero);
	
	ant = numero - 1;
	printf ("\n O antecessor e: \n %d", ant);
	
	suc = numero + 1;
	printf ("\n O sucessor e: \n %d", suc);


//7)  A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que: |O primeiro receberá 46% do total | O segundo receberá 32% do total. | O terceiro receberá o restante.|  Calcule e imprima a quantia recebida por cada um dos ganhadores. 

float importancia, primeiro, segundo, terceiro;

importancia = 780.000;

primeiro = importancia - 0.46;

segundo = importancia - 0.32;

terceiro =  importancia - 0.22;

printf ("O Primeiro lugar recebeu: %f, O Segundo lugar recebeu: %f, O Terceiro lugar recebeu: %f", primeiro, segundo, terceiro);

return 0;
}

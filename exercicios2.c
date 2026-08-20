#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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

primeiro = importancia * 0.46;

segundo = importancia * 0.32;

terceiro =  importancia * 0.22;

printf ("\n O Primeiro lugar recebeu: %f, \n O Segundo lugar recebeu: %f, \n O Terceiro lugar recebeu: %f", primeiro, segundo, terceiro);

//(URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

int n, segundos, horas, minutos;

printf ("\n Digite tempo de duracao em segundos do evento na fabrica: ");
scanf ("\n %d", &n);

horas = n / 3600;
minutos = (n % 3600) / 60;
segundos = n % 60;

printf ("\n O evento durou: %d:%d:%d", horas, minutos, segundos);

//9) Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma 
//viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através 
//de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e 
//a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em 
//seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto. 

float hours, kmh, litros, distancia_total, gasolina;

printf ("\n Quanto tempo em horas a viagem: ");
scanf ("\n %f", &hours);

printf ("\n Velocidade media percorrida: ");
scanf ("\n %f", &kmh);

distancia_total = hours * kmh;
printf ("\n A distancia total foi: %.3f", distancia_total);

gasolina = distancia_total / 12; 
printf ("\n Vao ser necessarios ser gastos %.3f litros de gasolina", gasolina);

//10) (URI 1013) Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

int a, b, c, d, maior, maior_temp1, maior_temp2;

printf ("\n Digite os valores: ");
scanf ("\n %d %d %d %d", &a, &b, &c, &d);

maior_temp1 = (a+b+abs(a-b))/2;

maior_temp2 = (maior_temp1+c+abs(maior_temp1-c))/2;

maior = (maior_temp2+d+abs(maior_temp2-d))/2;

printf ("\n O maior entre |%d|%d|%d|%d| = %d", a, b, c, d,  maior);

	return 0;
}

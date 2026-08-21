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

	int numero1, bit1, bit2, bit3, bit4, bit5, bit6, bit7;

printf("\nInsira o valor a ser convertido para binario :");
	scanf("%d", &numero1);
	
	bit7 = numero1% 2;
	numero1 = numero1/2;
	
	bit6 = numero1% 2;
	numero1 = numero1/2;;
	
	bit5 = numero1% 2;
	numero1 = numero1/2;
	
	bit4 = numero1% 2;
	numero1 = numero1/2;
	
	bit3 = numero1% 2;
	numero1 = numero1/2;
	
	bit2 = numero1% 2;
	numero1 = numero1/2;
	
	bit1 = numero1% 2;
	numero1 = numero1/2;
	
	printf("Binario : %d%d%d%d%d%d%d\n", bit1, bit2, bit3, bit4, bit5, bit6, bit7);
//4) (URI 1009) Faça um programa que leia, o salário fixo e o valor total em vendas de um vendedor.  Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a receber no final do mês, com duas casas decimais. [Syste
	
	float salario, vendas, soma;
	
	printf ("\n Insira seu salario: ");
	scanf ("%f", &salario);
	
	printf ("\n Insira valor total em vendas: ");
	scanf ("%f", &vendas);
	
	soma = salario + (vendas * 0.15);
	printf ("\n %.2f %f Recebido no final do mes: ", soma);
	
	
	 //5) Elabore um programa que peça ao usuário para digitar 4 valores. E mostre na tela a soma, a  média e o produtório desses valores
	
	double n1, n2, n3, n4, adicao, media, produtorio;
	
	printf ("\n Digite o primeiro valor: ");
	scanf ("%lf", &n1);
	
	printf ("\n Digite o segundo valor: ");
	scanf ("%lf", &n2);
	
	printf ("\n Digite o terceiro valor: ");
	scanf ("%lf", &n3);
	
	printf ("\n Digite o quarto valor: ");
	scanf ("%lf", &n4);
	
	adicao = n1 + n2 + n3 + n4;
	printf ("\n %lf A soma total foi:",  adicao);
	
	media = (n1 + n2 + n3 + n4) / 4;
	printf ("\n %lf A media foi:",  media);
	
	produtorio = n1 * n2 * n3 * n4;
	printf ("\n %lf O produtorio foi:",  produtorio);
	
	//6) (URI 1020) Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias 
	
	int idade, anos, meses, dias;
	
	printf ("\n Insira sua idade em dias: ");
	scanf ("\n %d", &idade);
	
	anos = idade / 365;
	printf ("\n Sua idade em anos e: %d", anos);
	
	meses = (idade % 365) / 30;
	printf ("\n Sua idade em meses e: %d", meses);
	
	dias = (idade % 365) % 30;
	printf ("\n Sua idade em dias e: %d", dias);
	
	printf ("\n Sua idade e de %d anos, %d meses e %d dias. ", anos, meses, dias);
	
	//7) ( URI 1011) Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159. 
	
	double raio, volume;
	
	printf ("\n Insira o valor do Raio: ");
	scanf ("\n %lf", &raio);
	
	volume = (4.0/3.0) * 3.14159 * pow(raio, 3);
	printf ("%O volume da esfera e de: %lf", volume);
	
	//8) Leia os quatro valores do usuário  correspondentes às coordenadas em um plano cartesiano, p1(x1,y1) e 
//p2(x2,y2) e calcule e mostre a distância entre eles, aplicando a distância euclidiana, segundo a fórmula: 
//d = √((x₂-x₁)² + (y₂-y₁)²) 

int x1, y1, x2, y2, q1, q2;
    float dist_euclidiana;

    printf("Insira os pontos da primeira coordenada: ");
    scanf("%d %d", &x1, &y1);

    printf("Insira os pontos da segunda coordenada: ");
    scanf("%d %d", &x2, &y2);

    q1 = x2 - x1;
    q2 = y2 - y1;

    dist_euclidiana = sqrt(pow(q1, 2) + pow(q2, 2));
    printf("Distância euclidiana = %.2f\n", dist_euclidiana);
	
	return 0;
	
}

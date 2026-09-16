#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

void sacar(int valor) {
    
    int notas100;
    notas100 = valor / 100;
    valor = valor % 100;
    printf("Notas de R$100: %d\n", notas100);
    
    int notas50;
    notas50 = valor / 50;
    valor = valor % 50;
    printf("Notas de R$50: %d\n", notas50);
    
    int notas10;
    notas10 = valor / 10;
    valor = valor % 10;
    printf("Notas de R$10: %d\n", notas10);
    
    int notas5;
    notas5 = valor / 5;
    valor = valor % 5;
    printf("Notas de R$5: %d\n", notas5);
    
    int notas2;
    notas2 = valor / 2;
    valor = valor % 2;
    printf("Notas de R$2: %d\n", notas2);
    
    int notas1;
    notas1 = valor / 1;
    valor = valor % 1;
    printf("Notas de R$1: %d\n", notas1);
	
}

	float CalculoAlcance(float v0, float graus){
		float g = 9.8;
		float k = 0.5;
		
	float rad = graus * (PI / 180);
	
	float vx = v0 * cos (rad);
	float vy = v0 * sin (rad);
	
	float x = 0;
	float y = 0;
	float t = 0;
	
	while (y >=0) {
		
	x = (vx / k) * (1 - exp(-k * t));
	
	y = (vy + g / k) * (1 - exp(-k * t)) / k - (g * t / k);
	
	t += 0.01;
	}
	
	return x;
	
	} 

float calc_inss(float salario) {
    if (salario <= 1412.00)
        return salario * 0.075;
    else if (salario <= 2666.68)
        return salario * 0.09;
    else if (salario <= 4000.03)
        return salario * 0.12;
    else
        return salario * 0.14;
}

float calc_irpf(float salario){
    if(salario <= 2259.20)
        return 0;
    else if(salario <= 2826.65)
        return salario * 0.075 - 169.44;
    else if(salario <= 3751.05)
        return salario * 0.15 - 381.44;
    else if(salario <= 4664.68)
        return salario * 0.225 - 662.77;
    else
        return salario * 0.275 - 896.00;
}

int main(int argc, char *argv[]) {
	
	//5)
	
	int valor;
    
    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);
    
    sacar(valor);
    
    //6)
    
    float v0, graus;
    
    printf("\nDigite a velocidade inicial: ");
    scanf("%f", &v0);
    
    printf("Digite o angulo: ");
    scanf("%f", &graus);
    
    float alcance = CalculoAlcance(v0, graus);
    
    printf ("\nAlcance maximo: %.2f metros\n", alcance);


    //7)
    
    float salario, desconto;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario);

    desconto = calc_inss(salario);

    printf("INSS: %.2f\n", desconto);
    
    //8)
    
    float salario_base, imposto;

    printf("Digite o salario-base: ");
    scanf("%f", &salario_base);

    imposto = calc_irpf(salario_base);

    printf("IRPF: %.2f\n", imposto);
    
    //9) 
    
    float valorhora, qntdhora;
    float salariobruto, inss, salariobase, irpf, salarioliquido;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorhora);

    printf("Digite quantas horas trabalhou no mes: ");
    scanf("%f", &qntdhora);

    salariobruto = valorhora * qntdhora;

    inss = calc_inss(salariobruto);

    salariobase = salariobruto - inss;

    irpf = calc_irpf(salariobase);

    salarioliquido = salariobruto - inss - irpf;

    printf("\n======================================================\n");
    printf("       RECIBO DE PAGAMENTO DE SALARIO\n");
    printf("                 (CONTRA-CHEQUE)\n");
    printf("======================================================\n");

    printf("Salario Bruto (Horas x Valor):   R$ %.2f\n", salariobruto);
    printf("(-) Desconto INSS:               R$ %.2f\n", inss);
    printf("(-) Desconto IRPF:               R$ %.2f\n", irpf);
    printf("------------------------------------------------------\n");
    printf("LIQUIDO A RECEBER:               R$ %.2f\n", salarioliquido);
    printf("======================================================\n");

    return 0;
}

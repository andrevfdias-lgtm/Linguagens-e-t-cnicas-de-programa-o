#include <stdio.h>
#include <stdlib.h>

float calc_inss(float salario){
    if(salario <= 1412.00)
        return salario * 0.075;
    else if(salario <= 2666.68)
        return salario * 0.09;
    else if(salario <= 4000.03)
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

    float salario;
    scanf("%f", &salario);

    float desconto = calc_inss(salario);
    float salario_base = salario - desconto;
    float imposto = calc_irpf(salario_base);

    printf("INSS: %.2f\n", desconto);
    printf("IRPF: %.2f\n", imposto);

    return 0;
}

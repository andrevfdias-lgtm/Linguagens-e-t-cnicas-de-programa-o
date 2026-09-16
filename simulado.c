#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf ("=====Exercicio 1====: \n");
	
	char a, b, c, d, x;
	
	printf ("\nInsira as letras: ");
	scanf ("%c %c %c %c", &a, &b, &c, &d);
	
	

x = a;
a = c;
c = d;
d = b;
b = x;
	
	printf ("\n%c %c %c %c", a, b, c, d);
	
	
	
	printf ("\n======");
	printf ("\n=====Exercicio 2====: \n");
	
	float ve, qntd_acoes, preco_acoes, vpa, pvp;
	
	printf ("Insira valor patrimonial da empresa: ");
	scanf ("%f", &ve);
	
	printf ("Insira quantidade de acoes disponiveis: ");
	scanf ("%f", &qntd_acoes);
	
	printf ("Insira preco das acoes: ");
	scanf ("%f", &preco_acoes);
	
	vpa = ve / qntd_acoes;
	pvp = preco_acoes / vpa;
	
	if (pvp < 0) {
		printf ("Classificao pessima");
	}
	
	else if (pvp >= 0 && pvp <0.8) {
		printf ("Classificao otima");
	}
	
	else if (pvp >= 0.8 && pvp <= 1.2) {
		printf ("Classificao indiferente");
	}
	
	else if (pvp > 1.2 && pvp <2.0) {
		printf ("Classificao boa");
	}
	
	else {
		printf ("Classificao ruim");
	}
	
	return 0;
}

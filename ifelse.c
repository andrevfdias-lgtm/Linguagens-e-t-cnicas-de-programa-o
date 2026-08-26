#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a, b, c, r;
	
	printf ("Insira os valores para A B C: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	if(a>b){
		r = a;
	}else{
		r = b;
	}
	if (c>r){
		r = c;
	}
	
	printf("%d e o maior", r);
	
	///
	
	int numero;
	
	printf ("\n Informe um numero: ");
	scanf ("\n %d", &numero);
	
	if (numero>0){
		numero = -numero;
	}else{
		numero = numero*numero;
	}
	
	printf ("\n %d O numero e: ", numero);
	
	//
	
	int n1, sobra, par, impar;
	
	printf ("\n Informe um numero: ");
	scanf ("\n %d", &n1);
	
	sobra = n1%2;
	if (sobra==0){
		n1 = par;
	}else{
		n1 = impar;
	}
	
	printf ("\n O numero e: ", n1);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int multDigito( int dig, int valor){
	return dig*valor;
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
    if (resto == 10) resto == 0;
    printf("\n%d", resto2);
    
    soma = multDigito(n1,11)+multDigito(n2,10)+multDigito(n3,9)+
		   multDigito(n4,8)+multDigito(n5,7)+multDigito(n6,6)+	 
           multDigito(n7,5)+multDigito(n8,4)+multDigito(n9,3)+multDigito(nv1,2);
           
    soma *=10;
    resto2 =soma%11;
    if (resto2 == 10) resto == 0;
    printf("\n%d", resto2);
	
	
	return 0;
}

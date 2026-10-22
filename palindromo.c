#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma palavra, e verifique 
se ela e um palindromo */

int main(int argc, char *argv[]) {

    int i, j, palindromo = 1;
    char palavra[30];

    scanf("%s", palavra);
    printf("Inserido %s", palavra);
    printf("\n");

    for (i = 0; i < 30 && palavra[i] != '\0'; i++);
        printf("%d", i);

    for (j = i - 1, i = 0; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) palindromo = 0;
    }

    if (palindromo) printf("\n e palindromo");
    else printf("\n nao e palindromo");

    return 0;
}

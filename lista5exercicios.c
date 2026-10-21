#include <stdio.h>
#include <stdlib.h>

/* Implemente um programa que leia um número n [com n positivo & n <= 64] e mostre na tela o seu
valor em base binária (bits) */

int main(int argc, char *argv[]) {
    int n, aux, mult = 1;

    scanf("%d", &n);

    aux = 0;

    if (n == 0) {
        printf("0");
    } else {
        while (n > 0) {
            aux = aux + (n % 2) * mult;
            n = n / 2;
            mult = mult * 10;
        }

        printf("%d", aux);
    }

    return 0;
}


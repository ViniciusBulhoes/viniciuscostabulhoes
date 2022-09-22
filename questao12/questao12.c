#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizQuadrada(int a);

int main(void){
    int a, a2;
    int (*pf)(int);
    printf("Insira o valor = ");
    scanf("%d", &a);
    pf = raizQuadrada;
    a2 = (*pf)(a);
    printf("A raiz quadrada e = %d", a2);

    return 0;
}

int raizQuadrada(int a){
    return sqrt(a);
}

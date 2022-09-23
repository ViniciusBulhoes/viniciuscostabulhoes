#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    return (*(float*)a - *(float*)b);
}

int main(){
    int n, i, j, aux;
    printf("Digite quantos numeros serao listados: ");
    scanf("%d", &n);
    float *numeros;
    numeros = malloc(n*sizeof(float));
    
    for(i=0; i<n; i++){
        scanf("%f", &numeros[i]);
    }
    
    qsort(numeros, n, sizeof(float), compare);
    
    for(i=0; i<n; i++){
        printf("%f\n", numeros[i]);
    }
    free(numeros);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, aux;
    printf("Digite quantos numeros serao listados: ");
    scanf("%d", &n);
    float *numeros;
    numeros = malloc(n*sizeof(float));
    
    for(i=0; i<n; i++){
        scanf("%f", &numeros[i]); //ler os valores
    }
    
    for(i=0; i<n-1; i++){
        for(j=i; j<n; j++){
            if(numeros[i]>numeros[j]){ //comparar se é maior
                //realiza a troca de posiçoes
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    
    for(i=0; i<n; i++){
        printf("%f\n", numeros[i]); //imprime novo array
    }
    free(numeros); //liberar memória alocada

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    char c[4];
    int i[4];
    float f[4];
    double d[4];
    int j;
    printf("tipo |x+1 |x+2 |x+3\n");
    printf("char |%d |%d |%d\n", c+1, c+2, c+3);
    printf("int |%d |%d |%d\n", i+1, i+2, i+3);
    printf("float |%d |%d |%d\n", f+1, f+2, f+3);
    printf("double |%d |%d |%d\n", d+1, d+2, d+3);

    return 0;
}
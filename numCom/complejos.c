#include <stdio.h>
#include "complejos.h"

int asigna_real (COM x, FORBIN v){
    x.fb[0] = v;
    return x.fb[0];
}

/*
int asigna_imaginario (COM x, IMAGINARIO v){
    x.fb[1] = v;
    return x.fb[1];
}

int parte_real (COM x){
    return x.fb[0];
}

int parte_imaginaria (COM x){
    return x.fb[1];
}

float mod (COM x){
    x.mod = ((x.fb[0])^2 + (x.fb[1])^2)^1/2 ;
    return x.mod;
}

float suma (COM x, COM y){
    x.t[0] = x.fb[0] + y.fb[0];
    x.t[1] = x.fb[1] + y.fb[1];
    return x.t[0], x.t[1];
}

void print_complejo(COM x){
    printf("{ ");
        printf("%d , %d i ", x.fb[0], x.fb[1]);
    printf("}\n");
}
*/

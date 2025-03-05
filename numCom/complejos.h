#ifndef __COMPLEJOS_H__
#define __COMPLEJOS_H__
#define TAM 2

//typedef int REAL;
//typedef int IMAGINARIO;
typedef int FORBIN;
typedef float TOTAL;

typedef struct complejo {
   float mod;
   FORBIN fb[TAM]; 
   TOTAL t[TAM];
   } COM;

//datosalida nombre_funcion (datoentrada);
int asigna_real (COM, FORBIN);
/*
int asigna_imaginario (COM, IMAGINARIO);
REAL parte_real (COM);
IMAGINARIO parte_imaginaria (COM);
float mod (COM);
float suma (COM, COM);

void print_complejo (COM);
*/
#endif

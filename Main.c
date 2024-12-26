//
// Created by José and Juanjo on 26/12/2024.
//

#include "stdio.h"
#include <stdlib.h>

const int MAXTandas = 10;
const int MAXCentros = 5;

int vacunasIni;

typedef struct{
    int vacunasDisp;
}TCentro;

typedef struct{
    int numVacunas;
}TEmpresa;

void leerFicheroEntrada();
TCentro* initCentro();
void initEmpresas();


int main(int argc, char *argv[]){
    printf("Comienzo del programa");
    leerFicheroEntrada();
    vacunasIni = 100;
    int numCentros;
    printf("Fin del programa");
    return 0;
}

void leerFicheroEntrada(){

}

TCentro* initCentro(){
    TCentro *centro = malloc(sizeof (TCentro) * 5);
    for (int i = 0; i < MAXCentros; i++ ){
        centro[i].vacunasDisp = vacunasIni;
    }
    return centro;
}
void initEmpresas(){
    int *Empresas = malloc (sizeof (int) * 3);
}
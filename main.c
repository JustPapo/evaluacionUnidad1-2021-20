#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[]){

    FILE *fin = fopen("./fin","r");
    if(fin == NULL){
        perror("Error al abrir archivo de entrada: \n");
        return (EXIT_FAILURE);
    }

    FILE *fout = fopen("./fout","a+");
    if(fout == NULL){
        perror("Error al abrir archivo de salida: \n");
        return (EXIT_FAILURE);
    }

    for (int i = 0; i < 6; i++)
    {
        if (i == 1) feature1(fin, fout);
        if (i == 2) feature2(fin, fout);
    }

    fclose(fin);
    fclose(fout);
    
    return EXIT_SUCCESS;
}

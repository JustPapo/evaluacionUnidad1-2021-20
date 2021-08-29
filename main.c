#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include <stdint.h>

int main(int argc, char *argv[]){
    
    FILE *fin = fopen("./fin", "r");
    FILE *fout = fopen("./fout", "a+");
    if (fin == NULL) {
        perror("Fallo al abrir archivo inicial");
        return(EXIT_FAILURE);
    }
    if (fin == NULL) {
        perror("Fallo al abrir archivo final");
        return(EXIT_FAILURE);
    }

    feature1(fin, fout);
    feature2(fin, fout);
    feature3(fin, fout);

    fclose(fin);
    fclose(fout);


    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[]){

    /*if(argc != 3){
        printf("number of arguments is not 3\n");
        return(EXIT_FAILURE);
    }*/

    FILE *fin = fopen("./fin","r");
    if (fin == NULL){
        perror("open fin file fails: ");
        return(EXIT_FAILURE);
    }

    FILE *fout = fopen("./fout","w");
    if (fout == NULL){
        perror("open fout file fails: ");
        return(EXIT_FAILURE);
    }

    feature1(fin,fout);
    feature2(fin,fout);
    feature3(fin,fout);

    int *parr = NULL;
    int length = 0;
    char *op = NULL;
    int lengthCourse = 0;
    struct _courseInfo_t *pCourse;
    feature4(fin,&parr,&length,&op);
    feature5(fout, parr, length, op);

    struct Obj_t obj = {NULL, 0};
    feature6(fin, &obj);
    feature7(fout,&obj);

    struct _courseInfo_t *pobj;
    int objArrSize = 0;
    feature8(fin, &pobj, &objArrSize);
    feature9(fout, pobj,objArrSize);
    

    /*feature10: release memory
    free(parr);
    free(op);
    free(obj.nombre);
    free(pobj);
    fclose(fin);
    fclose(fout);
*/

    return EXIT_SUCCESS;

}

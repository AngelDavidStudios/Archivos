#include <stdio.h>

int main(){


    int temp,aux;
    
    FILE *archivo=NULL;
    FILE *Multiplicacion= NULL;

    archivo=fopen("vector.txt","r");
    Multiplicacion= fopen("Total.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

        if (Multiplicacion==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }


    for (int j = 0; j < 100; j++)
    {
        fscanf(archivo,"%d" ,&temp);
        aux = temp * 3;
        fprintf(Multiplicacion,"%d\n", aux);
    }
    

     fclose(archivo);
     fclose(Multiplicacion);
     return 0;
}
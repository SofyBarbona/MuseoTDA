#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Museo.h"
#include "Director.h"
#include "ObraDeArte.h"

struct MuseoEst{
    char nombreM[30];
    char direccion[30];
    DirectorP director;
    ObraP obras[10];
};
void ordenarNombre(MuseoP mu){
    ObraP aux;
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(strcmp(getNombre(mu->obras[j]),mu->obras[j+1]  ) == 1 ){
                aux = mu->obras[j];
                mu->obras[j] = mu->obras[j+1];
                mu->obras[j+1] = aux;
            }
        }
    }
}
int buscarPos(ObraP os[], char buscar[30]){
    int pos = -2;

    for(int i=0;i<10;i++){
        if(strcmp(getNombre(os[i]),buscar) == 0 ){
            pos = i;
            i = 11;
        }
    }

    return pos;
}
void agregarObras(MuseoP mu, char nO[30], char aO[30], float pO){
    int posVa = buscarPos(mu->obras,"zzzzzz");

    if(posVa != -2){
        mu->obras[posVa] = cargarObraPP(nO,aO,pO);
    }else{
        printf("\nNo hay espacios vacios\n");
    }
}

void mostrarMuseo(MuseoP mu){
    printf("\nEl nombre del museo es: %s\n",mu->nombreM);
    printf("La direccion es: %s\n",mu->direccion);

    mostrarDirector(mu->director);

    for(int i=0;i<10;i++){
        if( strcmp(getNombre(mu->obras[i]), "zzzzzz") !=0 ){
            mostrarObra(mu->obras[i]);
        }
    }
}
MuseoP cargarMuseoPP(char n[30], char direc[30], char nD[30], char aD[30], int dD){
    MuseoP mu = malloc(sizeof(struct MuseoEst));

    strcpy(mu->nombreM,n);
    strcpy(mu->direccion,direc);

    mu->director=cargarDirectorPP(nD,aD,dD);

    inicializarObras(mu->obras);

    return mu;
}
void inicializarObras(ObraP os[]){
    for(int i=0;i<10;i++){
        os[i]=cargarObraPP("zzzzzz","zzzzzz",-1);
    }
}
MuseoP cargarMuseoPT(){
    MuseoP mu = malloc(sizeof(struct MuseoEst));

    printf("\nIngrese el nombre del museo\n");
    fflush(stdin);
    gets(mu->nombreM);

    printf("Ingrese la direccion del museo\n");
    fflush(stdin);
    gets(mu->direccion);

    mu->director=cargarDirectorPT();

    inicializarObras(mu->obras);

    return mu;
}

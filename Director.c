#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Museo.h"
#include "Director.h"
#include "ObraDeArte.h"

struct DirectorEst{
    char nombreD[30];
    char apellido[30];
    int dni;
};
void mostrarDirector(DirectorP dir){
    printf("\nEl nombre del director es: %s\n",dir->nombreD);
    printf("El apellido es: %s\n",dir->apellido);
    printf("El dni es: %d\n",dir->dni);
}
DirectorP cargarDirectorPP(char n[30], char a[30], int d){
    DirectorP dir = malloc(sizeof(struct DirectorEst));

    strcpy(dir->nombreD,n);
    strcpy(dir->apellido,a);
    dir->dni=d;

    return dir;
}
DirectorP cargarDirectorPT(){
    DirectorP dir = malloc(sizeof(struct DirectorEst));

    printf("\nIngrese el nombre del director\n");
    fflush(stdin);
    gets(dir->nombreD);

    printf("Ingrese el apellido del director\n");
    fflush(stdin);
    gets(dir->apellido);

    printf("Ingrese el dni del director\n");
    scanf("%d",&dir->dni);

    return dir;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Museo.h"
#include "Director.h"
#include "ObraDeArte.h"

struct ObraDeArteEst{
    char nombre[30];
    char autor[30];
    float precio;
};
char* getNombre(ObraP ob){
    return ob->nombre;
}
void mostrarObra(ObraP ob){
    printf("\nEl nombre de la obra es: %s\n",ob->nombre);
    printf("El autor es: %s\n",ob->autor);
    printf("El precio es: %f\n",ob->precio);
}
ObraP cargarObraPP(char n[30], char a[30], float p){
    ObraP ob = malloc(sizeof(struct ObraDeArteEst));

    strcpy(ob->nombre,n);
    strcpy(ob->autor,a);
    ob->precio=p;

    return ob;
}
ObraP cargarObraPT(){
    ObraP ob = malloc(sizeof(struct ObraDeArteEst));

    printf("\nIngrese el nombre de la obra\n");
    fflush(stdin);
    gets(ob->nombre);

    printf("Ingrese el autor de la obra\n");
    fflush(stdin);
    gets(ob->autor);

    printf("Ingrese el precio de la obra\n");
    scanf("%f",&ob->precio);

    return ob;
}

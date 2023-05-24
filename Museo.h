#ifndef MUSEO_H_INCLUDED
#define MUSEO_H_INCLUDED
//axiomas
//nombreM : 30 caracteres como maximo, sin numeros, ni caracteres especiales
//direccion: 30 caracteres como maximo, sin caracteres especiales
//director: es una estructura
//obras: es un arreglo de 10 estructuras
struct MuseoEst;
typedef struct MuseoEst* MuseoP;

//PRE:
//POS: pide por teclado los datos de los atributos para Museo
MuseoP cargarMuseoPT();

//PRE: necesito tener el nombre y direccion del museo; el nombre, apellido y dni del Director del museo;
//POS: pide por parametro los datos de los atributos para Museo
MuseoP cargarMuseoPP(char n[30], char direc[30], char nD[30], char aD[30], int dD);

//PRE: necesito el museo al que voy a mostrar
//POS: muestra los datos de los atributos del museo
void mostrarMuseo(MuseoP mu);

//PRE: necesito el museo; el nombre, el autor y el precio de la obra;
//POS: cargo mediante parametros una obra al arreglo obras del museo
void agregarObras(MuseoP mu, char nO[30], char aO[30], float pO);

//PRE: necesito el museo que contiene el arreglo de obras que debo ordenar
//POS: ordenar por nombre de las obras el arreglo de museo
void ordenarNombre(MuseoP mu);

#endif // MUSEO_H_INCLUDED

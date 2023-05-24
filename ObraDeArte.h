#ifndef OBRADEARTE_H_INCLUDED
#define OBRADEARTE_H_INCLUDED

//axiomas
//nombre: 30 caracteres como maximo, sin numeros, ni caracteres especiales
//autor: 30 caracteres como maximo, sin numeros, ni caracteres especiales
//precio: float, numeros positivos
struct ObraDeArteEst;
typedef struct ObraDeArteEst* ObraP;

//PRE:
//POS: carga mediante teclado los atributos de la obra
ObraP cargarObraPT();

//PRE: necesito el nombre, autor y precio de la obra
//POS: carga mediante parametros los atributos de la obra
ObraP cargarObraPP(char n[30], char a[30], float p);

//PRE: necesito la obra a mostrar
//POS: muestra los atributos de la obra
void mostrarObra(ObraP ob);

//PRE: necesito la obra
//POS: muestra el valor del atributo nombre de la obra
char* getNombre(ObraP ob);
#endif // OBRADEARTE_H_INCLUDED

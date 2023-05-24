#ifndef DIRECTOR_H_INCLUDED
#define DIRECTOR_H_INCLUDED

//axiomas
//nombreD: 30 caracteres como maximo, sin numeros, ni caracteres especiales
//apellido: 30 caracteres como maximo, sin numeros, ni caracteres especiales
//dni: int de 8 numeros positivos
struct DirectorEst;
typedef struct DirectorEst* DirectorP;

//PRE:
//POS: cargo mediante teclado los atributos del director
DirectorP cargarDirectorPT();

//PRE: necesito el nombre, apellido y dni del director
//POS: carga mediante parametros los atributos del director
DirectorP cargarDirectorPP(char n[30], char a[30], int d);

//PRE: necesito el director que voy a mostrar
//POS: muestra los datos de los atributos del director
void mostrarDirector(DirectorP dir);

#endif // DIRECTOR_H_INCLUDED

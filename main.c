#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Museo.h"
#include "Director.h"
#include "ObraDeArte.h"

int main()
{
    ///EJERCICIO 1
    printf("\nEJERCICIO 1: OBRAS VACIAS\n");
    MuseoP museo1 = cargarMuseoPP("Historico Nacional","Defensa 1600","Gabriel","Di Meglio",11222333);
    mostrarMuseo(museo1);

    ///EJERCICIO 2
    printf("\nEJERCICIO 2: AGREGO 3 OBRA\n");
    agregarObras(museo1, "Noche estrellada","Van Gogh", 23000000);
    agregarObras(museo1, "El Beso","Gustav Klimt", 17000000);
    agregarObras(museo1, "El Grito","Edvard Munch", 11000000);
    mostrarMuseo(museo1);

    ///EJERCICIO 3
     printf("\nEJERCICIO 3: ORDENO LAS OBRAS POR NOMBRE\n");
    ordenarNombre(museo1);
    mostrarMuseo(museo1);

    return 0;
}

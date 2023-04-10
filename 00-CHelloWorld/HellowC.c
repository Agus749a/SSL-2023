#include <stdio.h> //standard input-output header,cabecera que contiene definiciones de las macros, las constantes
                   //las declaraciones de la biblioteca estándar de C

int main (void) //funcion main, void como argumento. 
                //int main () e int main (void) en c++ es lo mismo. En cambio en C, no. 
                //En C, si una funcion no tiene argumento, le puedo pasar inumerables parametros.
                //en C++ si una funcion no recibe la cantidad de parametros declarada dara error.
                //Para restringir eso, usamos void como argumento. 
{
    printf("Hello World");

    FILE *Flujo = fopen("Outout2.txt", "w" );
    fprintf(Flujo,"Hello World pero con fprinf"); //Queria probar lo que menciono la ultima clase. Se me ocurrio hacer algo asi.
}
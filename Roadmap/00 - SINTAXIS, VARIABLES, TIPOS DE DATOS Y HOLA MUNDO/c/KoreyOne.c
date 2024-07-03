// no existe pagina oficial para C pero si mucha documentacion por parte de 
// Microsoft https://learn.microsoft.com/es-es/cpp/overview/visual-cpp-in-visual-studio?view=msvc-170

// esto es un comentario en una linea

/*
esto
es un comentario
en un bloque de
varias lineas
*/

//_______________________________________________________________________________________________________________________//
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define constante 2024      // esta es una constante global 
int main()
{
//____________________________________________VARIABLES Y CONSTANTES_____________________________________________________//
    
    int num1, num2, num3, sum; //estas son 4 variables de tipo entero
    const float PI = 3.1416;   //esta es una constante de tipo flotante local 

//_____________________________________________TIPOS DATOS PRIMITIVOS____________________________________________________//
    
    int entero;                 //Numero enteros
    float flotante;             //Numeros decimales
    char caracter;              //Caracteres de todo tipo     NOTA: Posiblemente muestre una advertencia el IDLE
    short numeroCorto;          //numeros cortos                    ya que son datos que estan declarados, pero no
    double dobleFlotante;       //Dobles flotantes                  estan en uso.
    
//_____________________________________________IMPRESION POR CONSOLA_______________________________________________________//
    printf("Hola, C \n");
    printf("Esta es la constante %f y es local y solo puede ser ocupada dentro de la funcion en la cual se definio\n ",PI);
    printf("\nEsta es una constante %i y es global puedes ser ocupada en todas las funciones que se le requiera\n ", constante); 
    
    printf("\ningresa el primer digito: ");
    scanf("%i",&num1);

    printf("\ningresa el segundo digito: ");
    scanf("%i",&num2);
    
    printf("\ningresa el tercer digito: ");
    scanf("%i",&num3);
    
    printf("los numeros ingresados son:  %i, %i, %i y son variables\n ", num1, num2, num3);
    sum = num1 + num2 + num3;
    printf("\nEsta es la suma de los numeros anteriores e igual es una variable %i", sum);

    return 0;
}


//inputsKeyboard
#include <stdio.h> 



int main(int argc, char** argv){
//hacerlo con diferentes tipos de dato char str[] / int / char / arrays **
   /*  float pi;
    printf("User pls enter pi: \t");
    scanf("%f", &pi );
    printf("pi:%f \n", pi); 
 */

    int var;
    char varc;

    printf("ingrese un valor entero y un caracter: \t");
    scanf("%d %c", &var, &varc);
    printf("datos ingreasados: %d  %c \n", var, varc);


//para convertir un char numerico en un integer se lel resta 0  *** casteo convierte types en otros 

/* contertir a strings en C

    printf("Give a name:\t");
    char username[255];
    scanf("%s", username); //no se pone el ampersand (&) porque ya es un array, no necesita la direccion SI QUIERO GUARDAR UN STRING CON SCANF NO SE PONE &
    */
    return 0;
}
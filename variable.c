#include <stdio.h>

//
int pi = 3;
float PI = 3.1416;
char mychar = 'C';
char mytext[6] = {'3','.','1','4','1','6'};
char mystring[255] = "fernando";
char* otrostring = "Dataeng.";
int ListNUm[5] = {1,2,3,4,5}; // para imprimirlo necesitamos un bucle
// index          0 1 2 3 4

//struct es un molde... no una variable. se le predefinen atributos
// puedo hacer el typedef directo aqui
struct mago {
    int mana; 
    int salud;
    int rangovis;
    char* name;
};

typedef struct mago MAGO ;
// con esto simplificamos mago

struct mago Fernando = {100, 120, 30, "Fernando"};
struct mago Luis = {100, 160, 40, "Luis"};
MAGO  miguel = {100, 150, 70, "Miguel"};



int main(int argc, char** argv) {
    printf("pi=%d, PI=%f, mychar=%c, mytext=%s, mystring=%s, otrostring=%s, ListNUm[2]=%d \n", pi, PI, mychar, mytext, mystring, otrostring, ListNUm[2] );
    printf("Hola me llamo: %s ", Luis.name);
    return 0;
    
}
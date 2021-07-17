#include <stdio.h>
#include <stdlib.h>

int main ()
    {

    float Num1, Num2;
    char OP;

    printf("Welcome to yout calculator\n");
    checkpoint1:
    printf("Select an operator: + for addition | - for substraction | * for multiplication | / for division \n");
    scanf("%c", &OP);

    if(OP == '+' || OP == '-' || OP == '*' || OP == '/'){
        printf("Set first number \n");
        scanf("%f", &Num1);
        printf("Set second number\n");
        scanf("%f", &Num2);

        float sum = (Num1 + Num2);
        float sub = (Num1 - Num2);
        float mult = (Num1 * Num2);
        float div = (Num1 / Num2);

        if (OP == '+'){
            printf("%f", sum);
        }
        else if (OP =='-'){
            printf("%f", sub);
        }
        else if (OP == '*'){
            printf("%f", mult);
        }
        else if (OP == '/'){
            printf("%f", div);
        }
     
    }
    else{
         printf("Invalid parameter, set a valid symbol");
        goto checkpoint1;
    }


    return 0;
    }
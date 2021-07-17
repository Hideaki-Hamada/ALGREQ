#include <stdio.h>
#include <string.h>

int num;

char option[1] = " ";

int main(){

    checkpoint1: 

    printf("Set an integer number:\n");
    scanf("%d" , &num);

   

        if(num % 2 == 0){
            printf("The number is even\n");

        }
        else{
            printf("The niumber is odd\n");
        };

        printf("Do you want to set another number? 'Y' to continue\n");
        scanf("%s" , option);

        if(strcmp(option, "Y" ) == 0 ){
            goto checkpoint1;
        }
       
            printf("Program finished\n");
        
return 0;

}


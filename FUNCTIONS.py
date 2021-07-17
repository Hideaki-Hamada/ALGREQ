#FUNCTIONS.Py

#import sys 

#def SayHelloTo(anyName):                    #creacion de la funcion
 #   print("Hello ", anyName, "!")


#if __name__ == "__main__":
   # SayHelloTo("Maria")    #llamada a la funcion

import sys ### aun no sabemos sys.argv!

def printMax( unalista ): #quiero saber el numero mas grande
    max(unalista)
    maxValue = max( unalista )
    print( "El valor mas grande de la lista es ", maxValue) 
    print( f'El valor mas grande de la lista es {maxValue}')

if __name__ == "__main__":
    print("Hello World...")
    printMax( [388,5,2,10])



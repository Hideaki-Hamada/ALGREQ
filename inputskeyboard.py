import sys


if __name__== "__main__":
    print("inputskeyboard python example\n")
    nameuser = input('GIve a name:\t')
    print("username: ", nameuser, "is logged")
    #print( type(variable) )    para imprimir el tipo de variable
    print( f'username: {nameuser} is logged') #es lo mismo que lo de arriba

    number1 = input("Enter a number:\t")
    number2 = input("Enter a number2:\t")

    #number1 = int("input(Enter a number:\t"))  PARA AHORRARSE EL CASTEO ( LIN 14 y 15 ) Se convierte de una vez

    number1 = int(number1)  #casteo (lin 14 y 15)
    number2 = int(number2)

    print(f"The addition of {number1}+{number2} = {number1+number2}") #literal strings siempre lleva f antes de la cadena de texto

import math


numA = int(input('Ingrese un numero entero: '))
numB = int(input('Ingrese otro numero entero: '))

c = ((numA ** 2) + (numB ** 2))
hipotenusa = math.sqrt(c)

print('La hipotenusa es: ', hipotenusa)

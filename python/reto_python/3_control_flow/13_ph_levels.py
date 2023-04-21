ph = int(input('Ingrese un valor entre 0 y 14 para calcular su PH: '))

if ph > 14:
    print('El valor es mayor que 14, ingrese un valor dentro del rango indicado')
elif ph > 7:
    print('El PH es Basico')
elif ph < 7:
    print('El PH es Acido')
else:
    print('El PH es Neutro')        
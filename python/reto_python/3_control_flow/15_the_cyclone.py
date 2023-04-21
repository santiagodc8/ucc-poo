height = int(input('Cual es tu altura en Cm? '))
credit = int(input('Cuantos creditos tienes? '))

if height >= 137 and credit >=10:
    print('¡Disfruta del viaje!')
elif height < 137:
    print('No eres lo suficientemente alto para montar')
elif credit < 10:
    print('No tiene suficientes créditos para viajar')
else:
    print('Datos no validos, ingrese nuevamente')
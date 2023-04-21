print('Bank of Makia')

pin = int(input('Ingresa tu PIN: '))

while pin != 1234:
    pin = int(input('PIN incorrecto. Ingrese su PIN de nuevo: '))
    
if pin == 1234:
    print('PIN aceptado!')
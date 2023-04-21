#Calcular el total en dolares de diferentes monedas asiaticas(🇨🇳,🇯🇵,🇰🇷)

yuan = int(input('Cuantos Yuanes(🇨🇳) tiene?'))
yen = int(input('Cuantos Yenes(🇯🇵) tiene?'))
won = int(input('Cuantos Wones(🇰🇷) tiene?'))

# El cambio del Yuan a Dolar esta en 0.15 al dia de 20/04/2023
# El cambio del Yen a Dolar esta en 0.0075 al dia de 20/04/2023
# El cambio del Yen a Dolar esta en 0.00076 al dia de 20/04/2023

cambioCN = 0.15
cambioJP = 0.0075
cambioKR = 0.00076

yuanDolar = (yuan * cambioCN)
yenDolar = (yen * cambioJP)
wonDolar = (won * cambioKR)
total = (yuanDolar + yenDolar + wonDolar)

print('El equivalente de Yuanes a Dolares es: ', yuanDolar)
print('El equivalente de Yenes a Dolares es: ', yenDolar)
print('El equivalente de Wones a Dolares es: ', wonDolar)
print('El total en dolares es: ', total)


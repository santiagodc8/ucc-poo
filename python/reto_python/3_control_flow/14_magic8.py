import random

Uno = '1 ---> Would you like to go to the concert?'
Dos = '2 ---> Will it rain tomorrow?'
Tres = '3 ---> Is he going to pass the test?'
Cuatro = '4 ---> Should I invest my money in the stock market?'
Cinco = '5 ---> Can I expect a promotion this year?'
Seis = '6 ---> Will I meet my soulmate soon?'
Siete = '7 ---> Am I going to win the lottery?'
Ocho = '8 ---> Will I get the job I applied for?'
Nueve = '9 ---> Is it worth buying a new car?'
print(Uno)
print(Dos)
print(Tres)
print(Cuatro)
print(Cinco)
print(Seis)
print(Siete)
print(Ocho)
print(Nueve)

pregunta = int(input('Elige una pregunta(ingresa el numero que corresponde a la pregunta): '))

if pregunta == 1:
    print(Uno)
elif pregunta == 2:
    print(Dos)
elif pregunta == 3:
    print(Tres)
elif pregunta == 4:
    print(Cuatro)
elif pregunta == 5:
    print(Cinco)
elif pregunta == 6:
    print(Seis)
elif pregunta == 7:
    print(Siete)
elif pregunta == 8:
    print(Ocho)
elif pregunta == 9:
    print(Nueve)
else:
    print('Ingrese una opcion valida')
    
respuestas = [
    "Yes - definitely.",
    "Without a doubt.",
    "It is decidedly so.",
    "Reply hazy, try again.",
    "Ask again later.",
    "Better not tell you now.",
    "My sources say no.",
    "Outlook not so good.",
    "Very doubtful."
]

print('answer:', random.choice(respuestas))


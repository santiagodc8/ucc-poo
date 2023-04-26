#Casas
Gryffindor = 0
Ravenclaw = 0
Hufflepuff = 0
Slytherin = 0

print('Responde las siguientes preguntas con su respectivo numero')
print('Q1) ¿Te gusta amanecer o anochecer?')
print('1) amanecer')
print('2) anochecer')

respuesta = int(input('Respuesta: '))
if respuesta == 1:
    Gryffindor += 1
    Ravenclaw += 1
elif respuesta == 2:
    Hufflepuff += 2
    Slytherin += 2
else:
    print('Ingrese una respuesta valida')
    
print('Responde las siguientes preguntas con su respectivo numero')
print('Q2) Cuando esté muerto, quiero que la gente me recuerde como:')
print('1) El Bien')
print('2) El Grande')
print('3) El Sabio')
print('4) El audaz')

respuesta = int(input('Respuesta: '))
if respuesta == 1:
    Hufflepuff += 2
elif respuesta == 2:
    Slytherin += 2
elif respuesta == 3:
    Ravenclaw + 2
elif respuesta == 4:
    Gryffindor += 2
else:
    print('Ingrese una respuesta valida')

print('Responde las siguientes preguntas con su respectivo numero')
print('Q3) ¿Qué tipo de instrumento agrada más a tu oído?')
print('1) El violín')
print('2) La trompeta')
print('3) El piano')
print('4) El tambor')

respuesta = int(input('Respuesta: '))
if respuesta == 1:
    Slytherin += 4
elif respuesta == 2:
    Hufflepuff += 4
elif respuesta == 3:
    Ravenclaw += 4
elif respuesta == 3:
    Gryffindor += 4
else:
    print('Ingrese una respuesta valida')
    
print("Gryffindor: ", Gryffindor)
print("Ravenclaw: ", Ravenclaw)
print("Hufflepuff: ", Hufflepuff)
print("Slytherin: ", Slytherin)

most_points = max(Gryffindor, Ravenclaw, Hufflepuff, Slytherin)
if Gryffindor == most_points:
  print('🦁 Gryffindor!')
elif Ravenclaw == most_points:
  print('🦅 Ravenclaw!')
elif Hufflepuff == most_points:
  print('🦡 Hufflepuff!')
else:
  print('🐍 Slytherin!')

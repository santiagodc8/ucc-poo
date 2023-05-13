def listarPersonas(personas):
    print("Personas: ")
    contador = 1
    for per in personas:
        datos = "{0}. Id: {1} | Name: {2} ({3} Phone)"
        print(datos.format(contador, per[0], per[1], per[2]))
        contador = contador + 1
    print(" ")
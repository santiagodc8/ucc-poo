from BD.conexion import DAO
import funciones 

def menuPrincipal():
    continuar = True
    while(continuar):
        opcionCorrecta = False
        while(not opcionCorrecta):
            print("|---------- Menu Principal 🔢 ----------|")
            print("1.- Listar Personas")
            print("2.- Registrar Personas")
            print("3.- Actualizar Personas")
            print("4.- Eliminar Personas")
            print("5.- Salir")
            print("|---------------------------------------|")
            opcion = int(input("Seleccione una opcion: "))
    
            if opcion < 1 or opcion > 5:
                print("Opcion incorrecta, ingrese nuevamente")
            elif opcion == 5:
                continuar = False
                print("Gracias por usar este sistema 🤝")
                break
            else:
                opcionCorrecta = True
                ejecutarOpcion(opcion)
        
def ejecutarOpcion(opcion):
    dao = DAO()
    
    if opcion == 1:
        try:
            personas = dao.listarPersonas()
            if len(personas) > 0:
                funciones.listarPersonas(personas)
            else:
                print("No se encontraron personas...")
        except:
            print("Ocurrio un error...")
    elif opcion == 2:
        print("Registro")
    elif opcion == 3:
        print("Actualizacion")
    elif opcion == 4:
        print("Eliminacion")
    else:
        print("Opcion no valida...")
        
        
    
menuPrincipal()
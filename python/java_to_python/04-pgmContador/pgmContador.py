import datetime
import time

class PgmContador:
    def __init__(self):
        print('|----------------------------------|')
        print('|-------------PGM: printf----------|')
        print('|---Author:🐍 Santiago Duran 🐍----|')
        print('|----------------------------------|')
        
    def contar(self):
        try:
            print("Contando desde el shell a las "+str(datetime.datetime.now()))
            for i in range(20):
                print("Posicion Indice ❇️: "+str(i))
                time.sleep(1-(i*0.05))
            print("Contador Finalizado...🔥🔥🔥🔥🔥")
        except Exception as e:
            print("⚠️⚠️⚠️ "+str(e))

pgm = PgmContador()
pgm.contar()

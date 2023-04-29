import datetime
import time

class pgmPrintf:
    def main(self):
        print('|----------------------------------|')
        print('|-------------PGM: printf----------|')
        print('|---Author:🐍 Santiago Duran 🐍----|')
        print('|----------------------------------|')

        try:
            print(f"Imprimiendo desde el shell a las {datetime.datetime.now()}⌚")
            time.sleep(3)
            print("📖📖📖📖📖📖📖📖📖")
            time.sleep(1)
            print("🖨️  🖨️  🖨️   Impresion finalizada 🖨️  🖨️  🖨️")
        except Exception as e:
            print(f"⚠️⚠️⚠️{e}")
            
pgmPrintf().main()
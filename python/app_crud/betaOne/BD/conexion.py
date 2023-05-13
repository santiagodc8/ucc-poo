import mysql.connector
from mysql.connector import Error

class DAO():
    
    def __init__(self):
        try:
            self.conexion = mysql.connector.connect(
                host='localhost',
                port='3306',
                user='root',
                password='',
                db='personapy'
            )
        except Error as ex:
            print("Error al intentar la conexion: {0}".format(ex))
            
    def listarPersonas(self):
        if self.conexion.is_connected():
            try:
                cursor = self.conexion.cursor()
                cursor.execute("SELECT * FROM persona ORDER BY persona id ASC")
                resultados = cursor.fetchall()
                return resultados
            except Error as ex:
                print("Error al intentar la conexion: {0}".format(ex))

# import mysql.connector

# conexion = mysql.connector.connect(user='root', password='', host='localhost', database='personapy', port='3306')
# print(conexion)
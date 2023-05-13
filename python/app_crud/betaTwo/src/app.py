from flask import Flask, render_template, request, redirect, url_for
import os
import database as db

template_dir = os.path.dirname(os.path.abspath(os.path.dirname(__file__ )))
template_dir = os.path.join(template_dir, 'src', 'templates')

app = Flask(__name__, template_folder = template_dir)


#Rutas de la aplicacion
@app.route('/')
def home():
    cursor = db.database.cursor()
    cursor.execute("SELECT * FROM user")
    myresult = cursor.fetchall()
    # Convertir los datos a diccionario
    insertObject = []
    columnNames = [column[0] for column in cursor.description]
    for record in myresult:
        insertObject.append(dict(zip(columnNames, record)))
    cursor.close()
    return render_template('index.html', data=insertObject)

#Ruta para guardar usuarios en la bdd
@app.route('/user', methods=['POST'])
def addUser():
    name = request.form['name']
    id = request.form['id']
    phone = request.form['phone']
    
    if name and id and phone:
        cursor = db.database.cursor()
        sql = "INSERT INTO user (name, id, phone) VALUES (%s, %s, %s)"
        data = (name, id, phone)
        cursor.execute(sql, data)
        db.database.commit() 
    return redirect(url_for('home'))
    


if __name__ == '__main__':
    app.run(debug=True, port=4000)

import mysql.connector

mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "Password19"
)

mycursor = mydb.cursor()

db_name = "django_crm"
sql_command = "CREATE DATABASE "+db_name

mycursor.execute(sql_command)
print('done')
import mysql.connector

mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "Password19",
    database = "mydatabase"
)

mycursor = mydb.cursor()

sql_command =   """
                    UPDATE Student
                    SET first_name = "Ratul"
                    WHERE roll = 102;
                """

mycursor.execute(sql_command)
mydb.commit()

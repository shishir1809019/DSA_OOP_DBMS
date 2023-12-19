import mysql.connector

mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "Password19",
    database = "mydatabase"
)

mycursor = mydb.cursor()

sql_command =   """
                    INSERT INTO Student(roll, first_name, last_name)
                    VALUES(101, "Shishir", "Das"), 
                    (102, "Shishir", "Chandra");
                """

mycursor.execute(sql_command)
mydb.commit()
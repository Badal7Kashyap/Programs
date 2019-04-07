import sqlite3 as sq

d=sq.connect("k.db")
c=d.cursor()

#c.execute('''create table t4(
#          rollno integer primary key,
#         name text)''')
x=int(input("Enter Roll No: "))
y=input("Now Enter The Name: ")
c.execute('''insert into t4 VALUES(?,?)''',(x,y))
n=int(input("Enter Roll No to be Deleted: "))
c.execute("delete from t4 where rollno=?",(n,))
rn=int(input("Enter Roll no to be Updated: "))
n=input("Now enter the New name: ")
c.execute("update t4 set name=? where rollno=?",(n,rn))
c.execute("select * from t4")
d.commit()

print(c.fetchall())
d.close()

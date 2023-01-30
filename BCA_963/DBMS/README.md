

| Database

SQL : Structured Query language.



1. SHOW DATABASES; 

display all databases of host(machine/server)

``` mysql
SHOW DATABASES;
```

2. USE DATABASE_NAME;

Select the database.

```mysql
USE test;    
```

3. SELECT DATABASE();

DISPLAY SELECTED DATABASE ON WHICH YOU ARE WORKING. display name of current database.
```
   SELECT DATABASE();
```

4. SHOW TABLES;

Display all tables which are present in the current database.
```mysql

    SHOW TABLES;
```

5. CREATE DATABASE DATABASE_NAME

This cmd used to create database with given name.

```MYSQL
    CREATE DATABASE SCHOOL;
```

6. CREATE TABLE TABLE_NAME;

CREATE THE TABLE WITH FIELDS & DATABASE.

```mysql

    CREATE TABLE Student(rollNo int(3), name varchar(20), marks float(3));
``` 
7. DESC TABLE_NAME

Display properties of given table.

```mysql

    DESC Student;

```


8. INSERT INTO TABLE_NAME;

used to insert data into TABLE, according to column names,

```mysql
    INSERT INTO Student(rollNO, studentName, makrs) VALUES(1,'Priti',89.32)
```


9. SELECT * FROM TABLE_NAME;

used to display all data of given table

```
    SELECT * FROM Student;
```

10. SELECT columns,,, FROM TABLE_NAME

used to display specific columns of given table;

```
    SELECT rollNO,marks FROM Student;
```

11. SELECT * FROM TABLE WHERE ARGS..

used to get all data with specific condition.
```
    SELECT * FROM TABLE WHERE makrs>33
```

12. SELECT columns,,, TABLE_NAME WHERE ARGS...
used to get specific columns with specific conditions..

```
    SELECT rollNO from Student WHERE marks>33
```

13. SELECT * FROM TABLE LIKE pattern

used to get data where matched pattern

```
    SELECT * FROM Student WHERE name LIKE 'A%'
```


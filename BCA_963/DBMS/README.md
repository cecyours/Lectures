

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

7. INSERT INTO TABLE_NAME;


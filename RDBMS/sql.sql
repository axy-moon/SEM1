create table employee(emp_no INT PRIMARY KEY,
                      fname VARCHAR (20) NOT NULL,
                      lname VARCHAR (20) NOT NULL,
                      job_name VARCHAR (15),
                      MGR INT,
                      DOB DATE CHECK(DOB<=TO_DATE('01-JAN-1975', 'DD-MON-YYYY')),
                      hireDate DATE,
                      salary DECIMAL CHECK(salary<100000 AND salary>20000),
                      comm DECIMAL
);

insert into employee (emp_no,fname,lname,job_name,DOB,hireDate, salary) values (7839,'Robert','James','President','11-SEP-1972','11-JAN-03',65000);
insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary) values (7698,'Ram','Raman','Manager',7839,'05-JAN-72','25-JAN-07',42850);
insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary,comm) values (7782,'Ramana','Samy','Manager',7839,'06-SEP-73','16-SEP-08',42450,23230);
insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary,comm) values (7566,'Palani','Velappan','Manager',7839,'04-FEB-72','14-FEB-06',42975,19455);
insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary,comm) values (7654,'Senthil','Pandian','Salesman',7698,'09-AUG-69','19-AUG-07',21250,13400);
insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary,comm) values (7499,'Sampandham','Ramanathan','Salesman',7698,'02-FEB-70','22-FEB-06',21600,13300);

insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary,comm) values (7844,'Kannan','Kumar','Salesman',7698,'09-AUG-71','29-AUG-05',26000,17500);
insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary) values (7900,'Sumathi','Manian','Clerk',7698,'12-MAR-65','22-MAR-03',20950);
insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary,comm) values (7521,'Mohanraj','Ramkumar','Salesman',7698,'12-FEB-74','12-FEB-04',21250,15000);

insert into employee (emp_no,fname,lname,job_name,MGR,DOB,hireDate,salary) values (7902,'Kumaran','Saravanan','Analyst Manager',7566,'12-MAR-69','22-MAR-08',33000);
commit;


SELECT * FROM employee;
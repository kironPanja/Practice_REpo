use wipro_db;
use emp;

create table dept(
Dno int ,
dname varchar(20),
location varchar(30),
constraint dept_Dno_pk primary key(Dno)
);

select * from dept ;

INSERT INTO DEPT Values(10,'Development','Hyderabad')  ,
    (20,'Testing','Banglore') ,
   (30,'Operation','Mumbai') ,
(40,'Research','Chennai') ,
(50,'Sales','Delhi') ;

ALTER TABLE emp 
ADD (DNO INT, CONSTRAINT emp_dno_fk FOREIGN KEY (DNO) REFERENCES Dept(DNO));

UPDATE  emp SET  DNO = 10  WHERE EID IN (102,104,105);
UPDATE  emp SET  DNO = 20  WHERE EID IN (103,106,107);
UPDATE  emp SET  DNO = 30  WHERE EID IN (108,109);
UPDATE  emp SET  DNO = 40  WHERE EID IN (101);

desc emp;

select * from emp;

select * from dept ;

select E.eid , E.mid , M.eid , M.mid from emp E , emp M where E.mid = M.eid;

select salary from emp where Ename = 'tom';

 select * from emp where salary > (select salary from emp where Ename = 'tom') ;

 select * from emp where salary <ALL (select salary from emp where job = 'Developer') ;
 
-- update emp set salary = salary + 1000 where dno in (select dno from dept where location IN ('chennai','Bangalore') ;

select * from emp view ;

select ename , salary , rank() over(order by salary desc) ranks from emp;



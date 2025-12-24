create database wipro_db;

use wipro_db;

CREATE TABLE emp (
  EId INT PRIMARY KEY,
  Ename VARCHAR(20),
  Salary DECIMAL(7,2),
  Comm DECIMAL(7,2),
  Job VARCHAR(30),
  DOJ DATE,
  Mid INT
);

desc emp;

drop table employee;

select * from emp;

INSERT INTO  emp values(101,"King",50000,null,'President','2020-12-01',null);
INSERT INTO  emp values(102,'Smith',45000,null,'Manager','2021-09-23',101);
INSERT INTO  emp values(103,'Ford',40000,null,'Manager','2022-04-15',101);
INSERT INTO  emp values(104,'Tom',30000,1500,'Developer','2023-10-18',102);
INSERT INTO  emp values(105,'Scott',35000,1000,'Developer','2023-12-25',102);
INSERT INTO  emp values(106,'Jerry',25000,3000,'Tester',current_date,103);
INSERT INTO  emp values(107,'Ravi',22000,4000,'Tester',current_date-1,103);

delete FROM employee
WHERE EId = 101;

select * from emp ;

insert into emp(EId,Ename,DOJ) 
values(110,'anil','2024-01-01');

insert into emp values(108,"adam",47000,null,"Analyst",'2024-01-01',101),
(109,'javeed',47000,null,'Manager','2024-01-01',101);

select * from emp ;

Select * from emp 
where salary=47000;

select * from emp 
where salary > 30000;

select * from emp 
where salary < 30000;

select * from emp
where salary != 47000;

select * from emp 
where comm IS null;

select * from emp 
where comm is not null;

select * from emp
where salary between 30000 and 50000;

Select salary , count(*)
from emp
group by salary
having count(*) > 1;

select * from emp ;

select max(salary) from emp ;

select min(salary) from emp ;

select sum(salary) as total from emp ;

select avg(salary) as average from emp;

select count(Eid) from emp ;

select * from emp ;

select count(comm) from emp where comm is not null ;

select count(*) from emp where comm is null;

select count(*) as count from emp where job = 'Tester' ;

SELECT  ENAME , SALARY + IFNULL (COMM ,  0)   as Total  from emp;

SELECT ROUND(AVG(salary)) AS average
FROM emp;


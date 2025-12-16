use wipro_db;

DROP  table Students;

create table Students (
Sid int primary key auto_increment,
Sname varchar(20) default 'NOT GIVEN',
Course varchar(15) unique,
Fee DOUBLE,
DOB date,
Gender char(1),
City varchar(20)
);

desc Students;

select * from Students;

insert into Students(Sname,Course,fee,dob,gender,city)
values('Ravi','Java',5000,'2001-09-05','M','Hyderabad');

INSERT INTO Students(course,fee,dob,gender,city) 
values('Python',4000,current_date,'M','Chennai');
 
INSERT INTO Students(sname,course,fee) 
values('tom','sql',7000);
 
INSERT INTO Students(sname,course,fee,dob,gender,city) 
values('Smith','C++',3000,current_date,'M','Pune') ,
('Ford','AI/ML',9000,current_date-1,'M','Mumbai')  ,
('Scott','C-lang',2000,current_date,'M','Delhi');

alter table Students add(duration int);

alter table students modify City varchar(40);

alter table students drop column duration;

desc students;

Select * from students;

alter table students rename column Sname to Student_Name;

update students set fee = 12000.00 , course = 'Adv Java' 
Where Sid = 1;

update students set Gender = 'M' 
where Sid=3;

delete from students 
where Sid=6;

Select * from students;

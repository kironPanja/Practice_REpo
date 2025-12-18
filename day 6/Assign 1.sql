create database assignment1;

use assignment1;

CREATE TABLE Members (
  MemberID INT PRIMARY KEY AUTO_INCREMENT,
  FullName VARCHAR(50) NOT NULL,
  Email VARCHAR(50) UNIQUE NOT NULL,
  Phone VARCHAR(15) UNIQUE,
  DOB DATE NOT NULL,
  Gender CHAR(1) CHECK (Gender IN ('M','F','O')),
  City VARCHAR(30) NOT NULL,
  RegisteredBy INT,
  CONSTRAINT fk_staff FOREIGN KEY (RegisteredBy) REFERENCES Staff(StaffID)
);


CREATE TABLE Staff (
  StaffID INT PRIMARY KEY AUTO_INCREMENT,
  FullName VARCHAR(50) NOT NULL,
  Role VARCHAR(30) NOT NULL CHECK (Role IN ('Librarian','Assistant','Admin')),
  Email VARCHAR(50) UNIQUE NOT NULL,
  Phone VARCHAR(15) UNIQUE
);

desc staff ;

desc members;

Insert into members values(101,'King','king@gmail.com','8594798393','2025-01-09','M','Kolkata') ;

INSERT INTO Members (FullName, Email, Phone, DOB, Gender, City, RegisteredBy)
VALUES
('Rahul Sharma', 'rahul.sharma@example.com', '9001122334', '1995-06-15', 'M', 'Kolkata', 1),
('Priya Das', 'priya.das@example.com', '9112233445', '1998-09-20', 'F', 'Delhi', 2);


INSERT INTO Staff (FullName, Role, Email, Phone)
VALUES
('Anita Kapoor', 'Librarian', 'anita.kapoor@library.com', '9876543210'),
('Ravi Singh', 'Assistant', 'ravi.singh@library.com', '9123456780');

select * from members ;

ALTER TABLE Members
ADD RegisteredBy INT,
ADD CONSTRAINT fk_registered_by
FOREIGN KEY (RegisteredBy) REFERENCES Staff(StaffID);

select * from staff;

SELECT m.MemberID, m.FullName AS MemberName, s.FullName AS StaffName, s.Role
FROM Members m
JOIN Staff s ON m.RegisteredBy = s.StaffID;






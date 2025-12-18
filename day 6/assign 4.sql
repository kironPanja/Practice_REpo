create database assignment4;

use assignment4;

CREATE TABLE Staff (
  StaffID INT PRIMARY KEY AUTO_INCREMENT,
  FullName VARCHAR(50) NOT NULL,
  Role VARCHAR(30) NOT NULL CHECK (Role IN ('Librarian','Assistant','Admin')),
  Email VARCHAR(50) UNIQUE NOT NULL,
  Phone VARCHAR(15) UNIQUE
);

desc staff;

INSERT INTO Staff (FullName, Role, Email, Phone)
VALUES
('Anita Kapoor', 'Librarian', 'anita.kapoor@library.com', '9876543210'),
('Ravi Singh', 'Assistant', 'ravi.singh@library.com', '9123456780'),
('Meera Joshi', 'Admin', 'meera.joshi@library.com', '9988776655'),
('Arun Banerjee', 'Librarian', 'arun.banerjee@library.com', '9112233445'),
('Sneha Iyer', 'Assistant', 'sneha.iyer@library.com', '9001122334');

select * from staff ;

ALTER TABLE Staff
MODIFY Role VARCHAR(50);

desc staff ;

show tables ;

DROP TABLE IF EXISTS TempLogs;


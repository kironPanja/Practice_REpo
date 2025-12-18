create database assignment5;

use assignment5;

CREATE TABLE Staff (
  StaffID INT PRIMARY KEY AUTO_INCREMENT,
  FullName VARCHAR(50) NOT NULL,
  Role VARCHAR(30) NOT NULL CHECK (Role IN ('Librarian','Assistant','Admin')),
  Email VARCHAR(50) UNIQUE NOT NULL,
  Phone VARCHAR(15) UNIQUE
);

INSERT INTO Staff (FullName, Role, Email, Phone)
VALUES
('Anita Kapoor', 'Librarian', 'anita.kapoor@library.com', '9876543210'),
('Ravi Singh', 'Assistant', 'ravi.singh@library.com', '9123456780'),
('Meera Joshi', 'Admin', 'meera.joshi@library.com', '9988776655');

select * from staff ;

CREATE INDEX idx_staff_role ON Staff(Role);

SELECT * FROM Staff WHERE Role = 'Librarian';

DROP INDEX idx_staff_role ON Staff;





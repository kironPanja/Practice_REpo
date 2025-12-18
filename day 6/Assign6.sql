CREATE USER 'lib_user'@'localhost' IDENTIFIED BY 'Lib@123';

GRANT SELECT, INSERT ON LibraryDB.* TO 'lib_user'@'localhost';

REVOKE INSERT ON LibraryDB.* FROM 'lib_user'@'localhost';

DROP USER 'lib_user'@'localhost';

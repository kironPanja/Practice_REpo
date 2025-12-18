Use wipro_db;

CREATE TABLE sales_table (  
    CustomerName VARCHAR(45) NOT NULL,  
    Year INT NOT NULL,  
    Country VARCHAR(45) NOT NULL,  
    Product VARCHAR(45) NOT NULL,  
    Sale DECIMAL(12,2) NOT NULL,  
    PRIMARY KEY(CustomerName, Year)    
);

desc sales_table ;

INSERT INTO sales_table VALUES  
('Stephen', 2017, 'India', 'Laptop', 10000),    
('Stephen', 2018, 'India', 'Laptop', 15000),    
('Stephen', 2019, 'India', 'TV', 20000),    
('Bob', 2017, 'US', 'Computer', 15000),    
('Bob', 2018, 'US', 'Computer', 10000),    
('Bob', 2019, 'US', 'TV', 20000),    
('Mandy', 2017, 'Canada', 'Mobile', 20000),    
('Mandy', 2018, 'Canada', 'Calculator', 1500),    
('Mandy', 2019, 'Canada', 'Mobile', 25000);

select * from sales_table ;
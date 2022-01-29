USE testdatabase;
DROP TABLE IF EXISTS employees;
CREATE TABLE employees (id INT, name VARCHAR(20));
INSERT INTO employees (id, name) VALUES (1, 'oi');
SELECT * FROM employees;

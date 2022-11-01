DROP PROCEDURE IF EXISTS emp_salary;

DELIMITER $$
USE employees;
CREATE PROCEDURE emp_salary(IN var_x INTEGER)

BEGIN

	
    SELECT e.first_name, e.last_name, AVG(s.salary)
    FROM employees e
		JOIN
	salaries s ON e.emp_no = s.emp_no
    
    WHERE e.emp_no = var_x;
END $$

DELIMITER ;

call emp_salary(11300);

DELIMITER $$

CREATE PROCEDURE emp_salaryAVG(IN var_x INTEGER, out p_avg_salary DECIMAL(10,2))

BEGIN

	
    SELECT AVG(s.salary)
    INTO p_avg_salary
    FROM employees e
		JOIN
	salaries s ON e.emp_no = s.emp_no
    
    WHERE e.emp_no = var_x;
END $$

DELIMITER ;

call emp_salaryAVG(11300);

DROP PROCEDURE IF EXISTS emp_info;

DELIMITER $$ 
CREATE PROCEDURE emp_info(IN var_first_name VARCHAR(255), IN var_last_name VARCHAR(255), OUT p_emp_no INTEGER)

BEGIN
	SELECT emp_no
    INTO p_emp_no
    FROM employees e
    WHERE e.first_name = var_first_name AND e.last_name = var_last_name;
    
END $$

DELIMITER ;

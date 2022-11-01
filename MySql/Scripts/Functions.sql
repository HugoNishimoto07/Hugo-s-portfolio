USE employees;


DELIMITER $$

CREATE FUNCTION f_emp_avg_salary(p_emp_no INTEGER) RETURNS DECIMAL(10,2)
DETERMINISTIC NO SQL READS SQL DATA
BEGIN

DECLARE v_avg_salary DECIMAL(10,2);

	SELECT AVG(s.salary)
    INTO  v_avg_salary
    FROM employees e
		JOIN
	salaries s ON e.emp_no = s.emp_no
    
    WHERE e.emp_no = p_emp_no;

RETURN v_avg_salary;
END $$

DELIMITER ;

DELIMITER $$

CREATE FUNCTION emp_info(var_f VARCHAR(255),var_l VARCHAR(255))
RETURNS DECIMAL(10,2)
DETERMINISTIC NO SQL READS SQL DATA
BEGIN

DECLARE v_max_from_date DATE; 
DECLARE v_salary DECIMAL(10,2);

	SELECT MAX(from_date)
    INTO  v_max_from_date 
    FROM employees e
		JOIN
	salaries s ON e.emp_no = s.emp_no
    
    WHERE e.first_name = var_f
    AND e.last_name = var_l
    AND s.from_date = v_max_from_date;

RETURN v_salary;
END $$

DELIMITER ;

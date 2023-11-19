SELECT CASE
WHEN (SELECT COUNT(DISTINCT salary) FROM Employee) <= 1 THEN null
ELSE (SELECT MAX(salary) 
FROM Employee
WHERE salary < (
            SELECT MAX(salary)
            FROM Employee
        )
)
END AS SecondHighestSalary; 
# Write your MySQL query statement below
WITH temp AS (
    SELECT 
        d.id AS dept_id,
        d.name AS Department,
        e.id AS emp_id,
        e.name AS Employee,
        e.salary AS Salary,
        DENSE_RANK() OVER (
            PARTITION BY d.id 
            ORDER BY e.salary DESC
        ) AS rnk
    FROM Employee e
    LEFT JOIN Department d 
        ON e.departmentId = d.id
)
SELECT Department, Employee, Salary
FROM temp
WHERE rnk <= 3;
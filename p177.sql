CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN

    declare M INT;
    set M = N-1;

    RETURN (
        select distinct Salary
        from Employee
        order by Salary desc
        LIMIT 1 offset M
    );
END

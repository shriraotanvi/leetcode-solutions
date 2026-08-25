# Write your MySQL query statement below
select d.name as Department,
    t.name as Employee, 
    t.salary as Salary
from (
    select name, salary, departmentId,
    dense_rank() over (
        partition by departmentId
        order by salary desc
    )as 'rank'
    from employee 
)t
join department d
on d.id = t.departmentId
where t.rank <=3;
# Write your MySQL query statement below
with temp as (
    select managerId  
    from Employee  
    group by managerId  
    having count(*) >= 5 
)
select e.name  
from Employee e join temp t on e.id = t.managerId;
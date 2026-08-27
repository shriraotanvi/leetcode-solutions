# Write your MySQL query statement below
with consec as (
    select num,
    lag(num, 1) over(order by id) as prev1,
    lag(num, 2) over(order by id) as prev2
    from Logs
)
select distinct num as ConsecutiveNums
from consec
where num = prev1
and num = prev2;
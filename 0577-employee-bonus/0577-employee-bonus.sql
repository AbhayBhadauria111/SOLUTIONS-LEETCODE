# Write your MySQL query statement below
Select name , bonus from Employee left join Bonus using(empId)
where bonus<1000 or bonus is NULL
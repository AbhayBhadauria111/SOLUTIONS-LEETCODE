# Write your MySQL query statement below
select E2.unique_id,E1.name from Employees E1 left join EmployeeUNI E2 on  E1.id=E2.id
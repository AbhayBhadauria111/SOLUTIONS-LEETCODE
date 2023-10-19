# select E1.name from Employee E1 join Employee E2 on E1.managerId=E2.id group by (E2.id) having count(E1.name)>4

select e1.name from Employee as e1 join Employee as e2 on e1.id=e2.managerId group by(e2.managerId) having count(e2.id)>4
# Write your MySQL query statement below
Select firstName,lastName,city,state from Person left outer join Address on Person.personId=Address.personId
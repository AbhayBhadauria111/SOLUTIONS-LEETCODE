# Write your MySQL query statement below
select C.customer_id from Customer C join Product P using (product_key) 
group by C.customer_id having count(Distinct P.product_key)=(select count(*) from Product)
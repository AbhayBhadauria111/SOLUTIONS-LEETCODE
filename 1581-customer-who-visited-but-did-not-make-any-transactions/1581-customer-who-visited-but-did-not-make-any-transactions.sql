# Write your MySQL query statement below
select v.customer_id,count(*) as count_no_trans from Visits v left join Transactions t on v.visit_id=t.visit_id where t.transaction_id is null group by (v.customer_id) 
# order by count(*)
# group by (v.customer_id)
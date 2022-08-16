# Write your MySQL query statement below
SELECT sell_date, count(distinct product) as num_sold, group_concat(distinct product order by product asc separator ',') products 
FROM Activities
GROUP BY sell_date
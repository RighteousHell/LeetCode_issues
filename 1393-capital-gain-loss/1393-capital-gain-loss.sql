# Write your MySQL query statement below
select stock_name, SUM(CASE WHEN operation = "Buy" THEN - price WHEN operation = "SELL" THEN price END) as capital_gain_loss
from Stocks
group by stock_name

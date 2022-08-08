# Write your MySQL query statement below
select Users.name, sum(Transactions.amount) as balance
from Users
left join Transactions using(account)
group by account
having balance > 10000
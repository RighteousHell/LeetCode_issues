# Write your MySQL query statement below
select Users.name, sum(Transactions.amount) as balance
from Users
left join Transactions on (Transactions.account = Users.account)
group by Users.account
having balance > 10000
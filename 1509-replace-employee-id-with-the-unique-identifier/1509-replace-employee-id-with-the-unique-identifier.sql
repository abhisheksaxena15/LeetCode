# Write your MySQL query statement below
select EmployeeUNI.unique_id ,  Employees.name 
from Employees 
left Join EmployeeUNI on Employees.id = EmployeeUNI.id;
# Write your MySQL query statement below
select w1.id
from weather w1 , Weather w2
where DATEDIFF(w1.recordDate , w2.recordDate) = 1
AND w1.temperature > w2.temperature;


-- w1.id	w1.recordDate	w1.temperature	w2.id	w2.recordDate	w2.temperature
-- 2	    2015-01-02	          25	      1	    2015-01-01	        10
-- 3	    2015-01-03	          20	      2	    2015-01-02	        25
-- 4	    2015-01-04	          30	      3	    2015-01-03	        20
# Write your MySQL query statement below
SELECT a1.machine_id, 
       ROUND(AVG(a2.timestamp - a1.timestamp), 3) AS processing_time 
FROM Activity a1, Activity a2
WHERE a1.machine_id = a2.machine_id
    AND a1.process_id = a2.process_id
    AND a1.activity_type = 'start'
    AND a2.activity_type = 'end'
GROUP BY a1.machine_id;



-- a.machine_id	a.pros_id	a.ac_type	a.tiamp	  b.machine_id 	b.pros_id	b.ac_type	b.timestamp
-- 0	                0	        start	0.712	    0	            0	        end	        1.520
-- 0	                1	        start	3.140	    0	            1	        end	        4.120
-- 1	                0	        start	0.550	    1	            0	        end	        1.550
-- 1	                1	        start	0.430	    1	            1	        end	        1.420
-- 2	                0	        start	4.100	    2	            0	        end	        4.512
-- 2	                1	        start	2.500	    2	            1	        end	        5.000
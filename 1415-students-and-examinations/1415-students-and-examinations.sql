# Write your MySQL query statement below
SELECT 
    s.student_id, 
    s.student_name, 
    ss.subject_name, 
    COUNT(e.subject_name) AS attended_exams
FROM Students s 
CROSS JOIN Subjects ss
LEFT JOIN Examinations e 
    ON s.student_id = e.student_id 
    AND e.subject_name = ss.subject_name
GROUP BY 
    s.student_id, 
    s.student_name, 
    ss.subject_name
ORDER BY 
    s.student_id;



-- student_id	student_name	subject_name	   e.subject_name
-- 1	            Alice	        Math	            Math
-- 1	            Alice	        Math	            Math
-- 1	            Alice	        Math	            Math            
-- 1	            Alice	        Physics	            Physics
-- 1	            Alice	        Physics	            Physics
-- 1	            Alice	        Programming	        Programming
-- 2	            Bob	            Math	            Math
-- 2	            Bob	            Physics	            NULL
-- 2	            Bob	            Programming	        Programming
-- 13	            John	        Math	            Math
-- 13	            John	        Physics	            Physics
-- 13	            John	        Programming	        Programming
-- 6	            Alex	        Math	            NULL
-- 6	            Alex	        Physics	            NULL
-- 6	            Alex	        Programming	        NULL


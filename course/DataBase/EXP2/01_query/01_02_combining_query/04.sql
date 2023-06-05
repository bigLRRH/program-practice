USE [202111040656]
-- ④ 统计每门课程的学生选修人数（超过 5 人的课程才统计）。要求显示课程号和人数。 
SELECT C#,COUNT(S#)
FROM SC
GROUP BY C#
    HAVING COUNT(S#) >5;
--验证正确性
SELECT C#, COUNT(DISTINCT S#)
	FROM SC
	GROUP BY C#
		HAVING COUNT(*)>5;
USE [202111040656]
-- ⑥ 在表 SC 中检索成绩不低于 80 分的学生学号和课程号。 
SELECT S#,C#
FROM SC
WHERE SCORE >= 80;
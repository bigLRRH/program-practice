use [202111040656]
-- ④ 检索至少选修两门课程的学生学号。 
SELECT S#
FROM SC
GROUP BY S#
	HAVING COUNT(C#)>'1';
--验证正确性
SELECT DISTINCT A.S#
FROM SC AS X,SC AS Y
WHERE X.S# = Y.S# AND X.C# <> Y.C#;
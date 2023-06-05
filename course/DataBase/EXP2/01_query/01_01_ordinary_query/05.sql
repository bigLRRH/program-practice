USE [202111040656]
-- ⑤ 检索至少有学号 S1 和 S5 学生选修的课程的课程号。 
SELECT DISTINCT C#
FROM SC
WHERE S# = 'S1'
    AND C# IN
    (
        SELECT C#
        FROM SC
        WHERE S# = 'S5' 
    );
--验证正确性
SELECT DISTINCT A.C#
FROM SC AS X,SC AS Y
WHERE X.C# = Y.C# AND X.S#='S1' AND Y.S#='S5';
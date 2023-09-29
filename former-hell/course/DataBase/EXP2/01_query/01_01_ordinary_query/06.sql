USE [202111040656]
-- ⑥ 检索 TOM 同学不学的课程的课程号。 
SELECT C#
FROM C
WHERE C# NOT IN
(
    SELECT C#
    FROM SC
    WHERE S# IN 
    (
        SELECT S#
        FROM S
        WHERE SNAME = 'TOM'
    )
);
--验证正确性
SELECT C#
FROM C
WHERE C# NOT IN
(
    SELECT DISTINCT C#
    FROM S, SC
    WHERE SNAME = 'TOM' AND S.S# = SC.S#
);

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
WHERE NOT EXISTS
(
    SELECT *
    FROM S, SC
    WHERE S.S#=SC.S# AND C.C#=SC.C# AND SNAME='TOM'
);
